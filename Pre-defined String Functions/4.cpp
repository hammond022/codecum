#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[50] = "Welcome to CodeChum";
	char foo[50];
	int bar;
	
	printf("Enter a string: ");
		scanf("%[^\n]s", &foo);
	
	strcat(foo, str1);
	bar = strlen(foo);
	
	printf("%s %i", foo, bar);
	

    // Hey there, start typing your C code here...
}
