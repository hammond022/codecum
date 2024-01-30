#include <stdio.h>

int main(){
	int foo, bar, spam ,eggs;
	
	printf("Enter a: ");
		scanf("%i", &foo);
	printf("Enter b: ");
		scanf("%i", &bar);
	printf("Enter c: ");
		scanf("%i", &spam);
		
	eggs = foo + bar;
	if( eggs > spam){
		printf("%i + %i > %i = yes", foo, bar, spam);
		
	}
	else{
		printf("%i + %i > %i = no", foo, bar, spam);
	}
}
