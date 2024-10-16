#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char zelle1 = 'P';
    char zelle2 = 'X';
    short zelle3 = 324;
    int zelle4 = 3200;
    long zelle5 = 328932;
    float zelle6 = 3.1411593;
    double zelle7 = 2.717200;

    printf("WERTE DER VARIABLEN\n----------------------------------------------------------------------------------");
    printf("Variable\tZeichen\t\thex\t\tokt\n----------------------------------------------------------------------");
    printf("c [char]\t%c\t\t%d\t%x\t\t%o\n", zelle1, zelle1, zelle1, zelle1);
    printf("c [char]\t%c\t\t%d\t\t%x\t\t%o\n", zelle2, zelle2, zelle2, zelle2);
    printf("s [short]\t%c\t\t%d\t\t%x\t\t%o\n", zelle3, zelle3, zelle3, zelle3);
    printf("i [int]\t%c\t\t%d\t\t%x\t\t%o\n", zelle4, zelle4, zelle4, zelle4);
    printf("l [long]\t%c\t\t%d\t\t%x\t\t%o\n", zelle5, zelle5, zelle5, zelle5);
    printf("f [float]\t%c\t\t%d\t\t%x\t\t%o\n", zelle6, zelle6, zelle6, zelle6);
    printf("d [double]\t%c\t\t%d\t\t%x\t\t%o\n", zelle7, zelle7, zelle7, zelle7);
    return 0;

}