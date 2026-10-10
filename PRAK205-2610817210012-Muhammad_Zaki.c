#include <stdio.h>
#include <math.h>

int main() {
    int height;
    int hipotenuse;

    scanf("%d %d", &height, &hipotenuse);

    int base = sqrt(pow(hipotenuse, 2) - pow(height, 2));
    int perimeter = height + base + hipotenuse;
    int area = (base * (height / 2));

    printf("Alas = %d cm\n", base);
    printf("Tinggi = %d cm\n", height);
    printf("Keliling = %d cm\n", perimeter);
    printf("Luas = %d^2 cm\n", area);

    return 0;
}