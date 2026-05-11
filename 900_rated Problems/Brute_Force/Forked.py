t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    xK, yK = map(int, input().split())
    xQ, yQ = map(int, input().split())

    moves = [
        (a, b), (a, -b), (-a, b), (-a, -b),
        (b, a), (b, -a), (-b, a), (-b, -a)
    ]
    V = set(moves)

    dx = xQ - xK
    dy = yQ - yK

    ans = 0
    for vx, vy in V:
        if (vx + dx, vy + dy) in V:
            ans += 1
    print(ans)