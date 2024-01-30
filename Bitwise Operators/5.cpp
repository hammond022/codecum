 #include <stdio.h>
 
 int main(){
 	int foo;
 	printf("Enter a number: ");
 		scanf("%i", &foo);
 	foo = ~foo;
	printf("Result: %i",foo);
 }
