#include <stdio.h>
#include <ctype.h>

int main(){
	char foo;
	
	printf("Enter a character: ");;
		scanf("%c", &foo);
		
	printf("%c", toupper(foo));
}
