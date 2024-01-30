#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[50], str2[50];

    printf("Enter the first string: ");
    scanf("%[^\n]s", &str1);
    printf("Enter the second string: ");
    scanf(" %[^\n]s", &str2);
    
    int foo = strcmp(str1, str2);

    if (foo == 0) {
    	printf("They are equal.");
    }
	else
    	printf("They are not equal.");

}
