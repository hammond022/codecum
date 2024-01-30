#include <stdio.h>

int main(){
	char foo, bar;
	
	printf("Enter a character: ");
		scanf("%c", &foo);
		
	if(foo == 'M' || foo == 'm'){
		printf("Male");
	}	
	else if(foo == 'F' || foo == 'f'){
		printf("Female");
	}
	else{
		printf("Prefer not to say");
	}
}
