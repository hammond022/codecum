#include <stdio.h>

int main(){
	double foo, bar, spam;
	
	printf("Enter decimal value 1: ");
		scanf("%lf", &foo);
	printf("Enter decimal value 2: ");
		scanf("%lf", &bar);
	printf("Enter decimal value 3: ");
		scanf("%lf", &spam);
		
	spam = foo+bar+spam;
	
	if(spam < 200000){
		printf("average");
	}
	else if(spam < 400000){
		printf("rich");
	}
	else if(spam < 600000){
		printf("super rich");
	}
	else if(spam > 600000){
		printf("crazy rich");
	}
}
