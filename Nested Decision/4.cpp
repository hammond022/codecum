#include <stdio.h>
#include <math.h>

int main(void) {
    int total = 10;
    int foo, bar;
    int posbol;
    
    // Hey there, start typing your C code here...
    printf("Enter an integer: ");scanf("%i", &foo);
    
    if(foo == 0){printf("Nothing happened.");return 0 ;}
    else{if( foo > 0){posbol = 1;}
		else{posbol = 0;}}
		
	switch(posbol) {
		case 1: 
			if(foo % 2 == 0){total += foo*foo;}
			else{total += (foo*foo*foo);}
			break;
		case 0: 
			printf("Enter another integer: ");scanf("%i", &bar);
			total += pow(foo, bar); 
			break;}
	
	printf("%i", total);
}
