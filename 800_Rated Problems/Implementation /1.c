#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* create_node(int value) {
    Node *n = (Node*)malloc(sizeof(Node));
    if (!n) { perror("malloc"); exit(EXIT_FAILURE); }
    n->data = value;
    n->next = NULL;
    return n;
}


int insert_at_position(Node **head, int value, int pos) {
    if (pos < 1) return 0;
    Node *newn = create_node(value);
    if (pos == 1) {
        newn->next = *head;
        *head = newn;
        return 1;
    }
    Node *cur = *head;
    int i;
    for (i = 1; cur != NULL && i < pos - 1; ++i) cur = cur->next;
    if (!cur) {
        free(newn);
        return 0; 
    }
    newn->next = cur->next;
    cur->next = newn;
    return 1;
}

void print_list(Node *head) {
    for (Node *p = head; p != NULL; p = p->next) {
        printf("%d", p->data);
        if (p->next) printf(" -> ");
    }
    printf("\n");
}

void free_list(Node *head) {
    while (head) {
        Node *t = head;
        head = head->next;
        free(t);
    }
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        Node *node = create_node(x);
        if (!head) head = tail = node;
        else { tail->next = node; tail = node; }
    }

    int pos, value;
    if (scanf("%d %d", &pos, &value) != 2) {
        free_list(head);
        return 0;
    }

    if (!insert_at_position(&head, value, pos)) {
        printf("Position out of range\n");
    } else {
        print_list(head);
    }

    free_list(head);
    return 0;
}