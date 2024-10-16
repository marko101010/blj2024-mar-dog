#include <stdio.h>

// This function swaps two numbers
//It takes two numbers and switches their values
void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    // We create 10 Variables to store 10 nr

    int numbers [];
int arr [];


    //Ask usr to enter 10 nr
    printf("Enter numbers one by one:\n");
    //read the 10 nr from usr
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);


    // This loop runs 9 Times because we have 10 NrS and we need 9 passes to sort them
    for (int pass =0; pass < 10; pass++) {
        //Compare two nr next to each other and swap if needed
        if (a > b) swap(&a, &b); //compare a & b, and if a is bigger than b then swap them
        if (b > c) swap(&b, &c); //compare b & c, and if b is bigger than c then swap them
        if (c > d) swap(&c, &d); //compare c & d, and if c is bigger than d then swap them
        if (d > e) swap(&d, &e); //compare d & e, and if d is bigger than e then swap them
        if (e > f) swap(&e, &f); //compare e & f, and if e is bigger than f then swap them
        if (f > g) swap(&f, &g); //compare f & g, and if f is bigger tha
        if (g > h) swap(&g, &h);
        if (h > i) swap(&h, &i);
        if (h > j) swap(&i, &j);
    }


return 0;
}