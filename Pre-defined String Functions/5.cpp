#include<stdio.h>
#include<string.h>

int main(){
	char foo[100], bar;
	
	printf("Enter a string: ");
		scanf("%[^\n]s", &foo);
	printf("Enter a character: ");
		scanf(" %c", &bar);
	
	char *spam = strchr(foo, bar);
	printf("%s", spam);
	
}
