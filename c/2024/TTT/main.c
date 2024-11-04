#include <stdio.h>

int field [3][3] = {{0}};

int main() {
    printf("Welcome to the Tic Tac Toe Game!!!!!\n");


    while(1) {
        //printfield
        for (int j=0; j<3 ; j++) {
            for (int i=0; i<3 ; i++) {
                printf("%d  ", field [j][i]);
            }
            printf("\n");
        }

        //setField
        printf("Choose an x coordinate \n");
        int x = -1;
        scanf(" %d", &x);

        printf("Choose an y coordinate \n");
        int y = -1;
        scanf(" %d", &y);

        field [x] [y] = 1;
    }
    return 0;
}
