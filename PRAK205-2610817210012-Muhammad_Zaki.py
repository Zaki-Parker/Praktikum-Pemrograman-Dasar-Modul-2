import math

height = int(input())
hipotenuse = int(input())

base = int(math.sqrt(pow(hipotenuse, 2) - pow(height, 2)))
perimeter = int(height + base + hipotenuse)
area = int(base * (height / 2))

print(f"Alas = {base} cm")
print(f"Tinggi = {height} cm")
print(f"Keliling = {perimeter} cm")
print(f"Luas = {area}^2 cm")