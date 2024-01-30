#include<stdio.h>
#include <ctype.h>
int main(void) {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    
    if (iswlower(c) != 0) {
        printf("Lowercase");
    } else {
        printf("Not Lowercase");
    }
    return 0;
}
