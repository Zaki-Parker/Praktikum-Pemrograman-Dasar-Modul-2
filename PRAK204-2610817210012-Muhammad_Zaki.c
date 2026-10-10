#include <stdio.h>

int main() {
    int radius;
    int height;
    float phi = 22.00 / 7.00;

    scanf("%d %d", &radius, &height);

    float volume = (phi * (radius * radius)) * height;
    float area = ((2 * phi) * radius) * (radius + height);
    float circumference = ((2 * phi) * radius);

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", area);
    printf("Keliling = %.2f\n", circumference);

    return 0;
}