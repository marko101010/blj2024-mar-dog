#include <stdio.h>

int field [3][3] = {{0}};

void printField();

void setField(int player);

int main() {
    printf("Welcome to the Tic Tac Toe Game!!!!!\n");


    while(1) {
        printField();
        setField(1);
        printField();
        setField(2);
    }
    return 0;
}
    void printField() {
        for (int j=0; j<3 ; j++) {
            for (int i=0; i<3 ; i++) {
                printf("%d  ", field [j][i]);
            }
            printf("\n");
        }

    }

void setField(int player) {
    while (1) {
        printf("Choose an x coordinate \n");
        int x = -1;
        scanf(" %d", &x);

        printf("Choose an y coordinate \n");
        int y = -1;
        scanf(" %d", &y);

        if (field [x] [y] != 0) {
            printf("Ups es hat ein Fehler gegeben!\n");
        }
        else {
            field [x] [y] = player;
            return;
        }
    }


}




