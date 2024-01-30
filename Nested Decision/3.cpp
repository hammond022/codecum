#include <stdio.h>
#include <string.h>
int main(){
	int foo;
	char spam[500];
	int primera;
	
	printf("Enter name: ");scanf("%[^\n]s", &spam);
	
	
	int bar = strlen(spam);
	char eggs = spam[bar - 1];
	
	if(eggs == 'a' || eggs == 'e' || eggs == 'i' || eggs == 'o' || eggs == 'u' ||
	eggs == 'A' || eggs == 'E' || eggs == 'I' || eggs == 'O' || eggs == 'U'){
		printf("Enter age: ");scanf("%i", &foo);
		
		if(foo % 2 == 0){
			printf("Wow, you're special!");
		}else{printf("Enter birth year: ");scanf("%i", &primera);
			if(primera % 2 == 0){
				printf("Oh, you're still special!");
			}else{printf("You will be special next year.");}
		}
	}else{printf("You're awesome!");}
}
