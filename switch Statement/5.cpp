#include <stdio.h>

int main(){
	int input;
	const char month[12][10] = {"January", "February", "March", "April","May", "June", "July", "August","September", "October", "November", "December"};
	printf("Enter an integer representing month: "); scanf("%i", &input);
	if( input < 1 || input > 12){printf("Invalid month"); return 0;}
	input -= 1; printf("%s", month[input]);
}
