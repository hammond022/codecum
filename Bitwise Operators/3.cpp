 #include <stdio.h>

int main(){
	int foo;
	
	printf("Enter a number: ");
		scanf("%i", &foo);
		
	foo = foo << 3;
	
	printf("Result: %i", foo);
}
