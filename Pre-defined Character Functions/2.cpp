#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    
    if ( isalpha(c) == 0 ) {
        printf("digit");
    } else {
        printf("not a digit");
    }
    return 0;
}
