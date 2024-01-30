#include <stdio.h>

int main(){
	char foo;

	printf("Enter a character: ");
		scanf("%c", &foo);
		
	if(foo == 'y' || foo == 'Y'){
		printf("Here's your ice cream");
	}
	else{
		printf("Okay, maybe some other time");
	}
}
