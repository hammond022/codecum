#include <stdio.h>

int main(){
	int input;
	const char level[4][11] = {"Freshies", "Sophomores", "Juniors", "Seniors"};
	printf("Enter grade level: "); scanf("%i", &input);
	if( input < 1 || input > 4){printf("N/A"); return 0;}
	input -= 1; printf("%s", level[input]);
}
