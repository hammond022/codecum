#include <stdio.h>

int main(){
	int foo, bar;
	
	printf("Enter age: ");
		scanf("%i", &foo);
		
	if(foo < 18){
		printf("minor");
	}
	else{
		printf("adult");
	}
}
