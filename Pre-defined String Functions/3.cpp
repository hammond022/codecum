#include <stdio.h>
#include <string.h>

int main(){
	char foo[50], bar[50];
	
	printf("Enter the first string: ");
		scanf("%[^\n]s", &foo);
	printf("Enter the second string: ");
		scanf(" %[^\n]s", &bar);
		

	strcat(foo,bar);
	printf("%s", foo);
}
