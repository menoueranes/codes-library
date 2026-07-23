#include <stdio.h>
int main() {
    char c;
    printf("Donne une lettre : ");
    scanf(" %c", &c);
    if (c >= 'a' && c <= 'z') {
        c = c - 32;
        printf("En majuscule : %c\n", c);
    }
    else if (c >= 'A' && c <= 'Z') {
        c = c + 32;
        printf("En minuscule : %c\n", c);
    }
    else {
        printf("Ce n'est pas une lettre !\n");
    }
    return 0;
}
