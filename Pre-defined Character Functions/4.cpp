#include <stdio.h>
#include <ctype.h>

int main(){
	char foo, bar;
	
	printf("Enter first letter: ");
		scanf("%c", &foo);
	printf("Enter second letter: ");
		scanf(" %c", &bar);
		
	printf("%c%c", toupper(foo),toupper(bar));
	printf("\n%c%c", tolower(foo),tolower(bar));
	
		
}
