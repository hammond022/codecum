#include <stdio.h>
#include <stdlib.h>
int main(){
	int foo, bar;
	char spam, eggs;
	

				printf("Enter years of work: ");
		scanf("%i", &foo);
	printf("Enter kind of work: ");
		scanf(" %c", &spam);
	

	if( spam == 'B'){
		if( foo < 2){
			printf("Salary: 10,000");
		}
		else if(foo <= 4){			
			printf("Salary: 12,000");
		}
		else if(foo >= 5){
			printf("Salary: 15,000");			
		}
		}
	
	else if(spam == 'W'){
		if( foo < 2){
			printf("Salary: 20,000");
		}
		else if(foo <= 4){			
			printf("Salary: 40,000");
		}
		else if(foo  >= 5){
			printf("Salary: 75,000");			
		}
		}
	}
	
