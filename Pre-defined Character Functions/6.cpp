#include<stdio.h>
#include <ctype.h>
int main(void) {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    
    if (isupper(c) != 0) {
        printf("Uppercase");
    } else {
        printf("Not Uppercase");
    }
    return 0;
}
