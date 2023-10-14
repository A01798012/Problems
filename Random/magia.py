#!/usr/bin/env python3

def magia(x, y, z):
    cuadrad_magico = []
    flag = False
    flag2 = False


    x = x.split(" ")
    y = y.split(" ")
    z = z.split(" ")

    cuadrad_magico.append(x)
    cuadrad_magico.append(y)
    cuadrad_magico.append(z)

    for i in range(3):
        for j in range(3):
            cuadrad_magico[i][j] = int(cuadrad_magico[i][j])

    for i in range(3):
        sumaHor = 0
        sumaVer = 0
        for j in range(3):
            sumaHor += cuadrad_magico[i][j]
            sumaVer += cuadrad_magico[j][i]
        if sumaHor == 15 and sumaVer == 15:
            flag = True
        else:
            return "NO"


    if(cuadrad_magico[0][0] + cuadrad_magico[1][1] + cuadrad_magico[2][2] == 15 and cuadrad_magico[2][0] + cuadrad_magico[1][1] + cuadrad_magico[0][2] == 15):
        flag2 = True

    print(flag, flag2)

    if(flag and flag2):
        return "SI"
    else:
        return "NO"



print(magia("6 1 8", "7 5 3", "2 9 4"))
