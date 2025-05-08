t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    s = sum(a)
    if s == n:
        print(0)
    elif s > n:
        print(s - n)
    else:
        print(1)
