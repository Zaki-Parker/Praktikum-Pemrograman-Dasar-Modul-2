radius = int(input())
height = int(input())
phi = 22 / 7

volume = (phi * (radius ** 2)) * height
area = ((2 * phi) * radius) * (radius + height)
circumference = ((2 * phi) * radius)

print(f"Volume = {volume:.2f}")
print(f"Luas = {area:.2f}")
print(f"keliling = {circumference:.2f}")