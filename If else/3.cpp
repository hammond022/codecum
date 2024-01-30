#include <stdio.h>

int main(void) {
	int total = 50;
	int foo, bar, spam,eggs;
	
	printf("Enter first positive integer: ");
		scanf("%i", &foo);
	printf("Enter second positive integer: ");
		scanf("%i", &bar);
	
	
	spam = foo % 2;
	eggs = bar % 2;
	if(spam == 0){
		total += foo;
	}
	else{
		total -= foo;
	}
		if(eggs == 0){
		total += bar;
	}
	else{
		total -= bar;
	}

	printf("%i", total);
    // Hey there, start typing your C code here...
}
