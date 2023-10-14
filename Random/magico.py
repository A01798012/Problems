#!/usr/bin/python3

def magia(row1, row2, row3):
    suma = 0
    diag1 = row1[0] + row2[1] + row3[2]
    diag2 = row3[0] + row2[1] + row1[2]
    if(sum(row1) == 15 and sum(row2) == 15 and sum(row3) == 15 and diag1 == 15 and diag2 == 15):
        for i in range(3):
            suma += row1[i] + row2[i] + row3[i]
            if(suma == 15):
              suma = 0
              if(i == 2):
                return "SI"
            else:
                return "NO"
    else:
        return "NO"


def _main() -> None:
  print("Entrada")
  row1 = input()
  row2 = input()
  row3 = input()

  row1 = row1.split(" ")
  row2 = row2.split(" ")
  row3 = row3.split(" ")

  for i in range(3):
      row1[i] = int(row1[i])
      row2[i] = int(row2[i])
      row3[i] = int(row3[i])


  print("Salida")
  print(magia(row1,row2,row3))

if __name__ == '__main__':
  _main()
