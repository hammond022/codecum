#include <stdio.h>

int main(){
	int foo, bar;
	char spam, eggs;
	
	printf("Choose the programming language you like best: ");
		scanf("%i", &foo);
	
	switch(foo){
		case 1:
			printf("You like C best");
			return 0;
			break;
		case 2:
			printf("You like C++ best");
			return 0;
			break;
		case 3:
			printf("You like Java best");
			return 0;
			break;
		case 4:
			printf("You like C# best");
			return 0;
			break;
		case 5:
			printf("You like Python best\nEnter type of development: ");scanf(" %c", &spam);
			switch(spam){
				case 'A': 
					printf("Web");
					break;
				case 'B':
					printf("Data Analytics");
					break;
				case 'C':
					printf("Backend");
					printf("\nDo you know any frameworks? ");scanf(" %c", &eggs);
					if(eggs == 'y' || eggs == 'Y'){printf("Wow, you're good!");}		
					break;}}

}
