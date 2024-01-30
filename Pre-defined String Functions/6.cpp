#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[50] = "Hello CodeChum!", foo[50];
	int bar;
	
	printf("Enter a string: ");
		scanf("%[^\n]s", &foo);
	printf("Enter an integer: ");
		scanf(" %i", &bar);
	
	printf("%s", strncat(str1, foo, bar));


}
