#include <stdio.h>

int main(){
	char grade;
	
	printf("Enter your grade: "); scanf("%c", &grade);
	
	switch(grade){
		case 'A': case 'B': printf("Good Job"); break;
		case 'C': printf("You're doing okay"); break;
		case 'D': case 'F': printf("You need to study harder"); break;
		default: printf("Stop lying and tell me your actual grade"); break;
	}
}
