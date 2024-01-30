#include <stdio.h>

int main(){
	
	char foo[50];
	
	scanf("%[^\n]s", &foo);
	printf("%s", foo);
}
