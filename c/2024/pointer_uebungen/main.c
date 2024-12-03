#include <stdio.h>


void makeUppercase (char *p_letter) {
    p_letter = *p_letter - 32;
    if (*p_letter >= && 97 <= 122)

}
int main (void) {

    char c1 = 'a';
    char c2 = '!';


    makeUppercase (&c1);
    makeUppercase (&c2);

    printf("%c%c", c1, c2); 
}
