#include <stdio.h>

int main() {
    char name[20];
    char student_id[20];
    char paralel_class[5];
    char place_and_date_of_birth[50];
    char address[50];
    char hobby[20];
    char phone_number[13];

    printf("Nama\t\t\t: ");
    scanf(" %[^\n]", name);

    printf("NIM\t\t\t: ");
    scanf(" %[^\n]", student_id);

    printf("Kelas Paralel\t\t: ");
    scanf(" %[^\n]", paralel_class);

    printf("Tempat/Tanggal Lahir\t: ");
    scanf(" %[^\n]", place_and_date_of_birth);

    printf("Alamat\t\t\t: ");
    scanf(" %[^\n]", address);

    printf("Hobby\t\t\t: ");
    scanf(" %[^\n]", hobby);

    printf("No. HP\t\t\t: ");
    scanf(" %[^\n]", phone_number);

    printf("\n");

    printf("Nama\t\t\t: %s\n", name);
    printf("NIM\t\t\t: %s\n", student_id);
    printf("Kelas Paralel\t\t: %s\n", paralel_class);
    printf("Tempat/Tanggal Lahir\t: %s\n", place_and_date_of_birth);
    printf("Alamat\t\t\t: %s\n", address);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("No. HP\t\t\t: %s\n", phone_number);

    return 0;
}