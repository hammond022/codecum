#include <stdio.h>

int main(){
	char foo;
	
	printf("Enter a single character: ");
		scanf("%c", &foo);
	printf("%c", foo);

	switch(foo){
		case 'A': case 'a': 
			printf("\nvowel");
			break;
		case 'E': case 'e': 
			printf("\nvowel");			
			break;
		case 'I': case 'i': 
			printf("\nvowel");
			break;
		case 'O': case 'o': 
			printf("\nvowel");
			break;
		case 'U': case 'u': 
			printf("\nvowel");
			break;
	};
}
