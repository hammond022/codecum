#include <stdio.h>

int main(){
	int foo, bar;
	
	printf("Enter your age: ");
		scanf("%i", &foo);
		
	printf("%i", foo);
	if(foo >=18){
		printf("\nadult");
	};
}
