#include <stdio.h>

/**
 *
 */
int Field [5][5] = {
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1}
};


void printField();

void setField();

int main() {
    printField();
    setField();
    printField();
    setField();


}
void printField() {
    for (int j=0; j<5 ; j++) {
        for (int i=0; i<5 ; i++) {
            printf("%d  ", Field [j][i]);
        }
        printf("\n");
    }
}
void setField() {
    printf("Choose an x coordinate \n");
    int x;
    scanf(" %d", &x);

    printf("Choose an y coordinate \n");
    int y;
    scanf(" %d", &y);

    Field [x] [y];
    return;
}

