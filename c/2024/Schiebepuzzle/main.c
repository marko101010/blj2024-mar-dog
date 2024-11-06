#include <stdio.h>
#include "utils.h"

#define FIELD_SIZE 4

int numSwap();

int field[FIELD_SIZE][FIELD_SIZE] = {
    { 15, 10,  3, 6},
    { 4, 7,  14, 11},
    {9, 12,  5, 2},
    {0, 1,  8, 13},
};

int input = 0;



int main(void) {

    do {
        printField (FIELD_SIZE, field);
        printf("Make your move:");
        scanf("%d", &input);
        numSwap();

    } while (input != 0);
    return 0;

}

int numSwap() {
    for (int i = 0; i < FIELD_SIZE; i++) {
        for (int j = 0; j < FIELD_SIZE; j++) {
            if(field[i][j] == 0) {
                if (input == 1 && j+1 < FIELD_SIZE) {
                    field[i][j++] = field[i][j];
                    field[i][j++] = 0;
                    return;

                }else if (input == 2 && i+1 < FIELD_SIZE) {
                    field[i++][j] = field[i][j];
                    field[i++][j] = 0;
                    return;

                }else if (input == 3 && i-1 >= 0) {
                    field[i--][j] = field[i][j];
                    field[i--][j] = 0;
                    return;

                }else if (input == 4 && j-1 >= 0) {
                    field[i][j--] = field[i][j];
                    field[i][j--] = 0;
                    return;

                }else if (input == 0) {
                    printf("Quitting...\n");
                    return;

                }else if (input > 4) {
                    printf("Wrong Input!\nTry again!\n");
                    return;
                }
            }
        }
    }
}
