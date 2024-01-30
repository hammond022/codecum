#include <stdio.h>

int main(){
	int a, b, foo;
	
	printf("Enter a: ");
		scanf("%i", &a);
	printf("Enter b: ");
		scanf("%i", &b);
		
	a += b;
	
	printf("%i", a);
}
