#include <stdio.h>
#include <ctype.h>
int main(void) {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    
    if (isalpha(c) != 0) {
        printf("alphabet");
    } else {
        printf("not an alphabet");
    }
    return 0;
}
