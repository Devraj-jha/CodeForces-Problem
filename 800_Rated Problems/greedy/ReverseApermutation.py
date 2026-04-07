import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))
    
    pos = p.index(n)
    
    # Reverse prefix up to pos
    res = p[:pos+1][::-1] + p[pos+1:]
    
    print(*res)