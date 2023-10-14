
n = 5
tar = (2*n)+1

idk= []

for x in range(1, tar):
    for y in range(x+1, tar):
        if(x != y and x+y >= 3):
            idk.append((x+y, y, x))

ans = sorted(idk, key=lambda tup: tup[0])

for i in ans:
    print(f"{i[1]} {i[2]} = {i[0]}")

print(ans)
