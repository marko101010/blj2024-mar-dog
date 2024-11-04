#include <stdio.h>

int main(void) {
    printf("Marko Dogas\n");
    char firstletter = 'M'  ;
    int age = 16;
    printf("Buchstabe : %c , Alter %d\n", firstletter, age);
    printf("Speicherbedarf int: %d Byte(s)\n", sizeof(int));

    float f = 5.67;
    double d = 3.14;
    int i = 4;
    char c = 'a';
    long l = 42;
    long long ll = 42;
    short s = 42;
    long double ld = 12;

    printf("Speicherbedarf long double: %d Byte(s)\n", sizeof(long double));
    printf("Speicherbedarf char: %d Byte(s)\n", sizeof(char));
    printf("Speicherbedarf int: %d Bytes(s)\n", sizeof(int));
    printf("Speicherbedarf long: %d Bytes(s)\n", sizeof(long));
    printf("Speicherbedarf long long: %d Bytes(s)\n", sizeof(long long));
    printf("Speicherbedarf short: %d Bytes(s)\n", sizeof(short));
    printf("Speicherbedarf double: %d Bytes(s)\n", sizeof(double));
    printf("Speicherbedarf float: %d Byte(s)\n", sizeof(float));
}
