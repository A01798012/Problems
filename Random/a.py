def min_divisor(n):
    for d in range(2, round(n**0.5) + 1):
        if n % d == 0:
            return d
    return n


for _ in range(int(input())):
    l, r = map(int, input().split())
    for x in range(l, r + 1):
        md = min_divisor(x)
        if md != x:
            print(md, x - md)
            break
    else:
        print(-1)
