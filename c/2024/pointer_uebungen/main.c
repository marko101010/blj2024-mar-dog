#include <stdio.h>


int main (void) {

    char c1 = 'a';
    char c2 = '!';


    makeUppercase (&c1);
    makeUppercase (&c2);

    printf("%c%c", c1, c2); 
}
