 #include <stdio.h>
 int main(){
 	char foo[100];
 	printf("Enter a string: ");;
 		scanf("%[^\n]s", &foo);
 	for(int bar = 1; bar <= 5; bar++) {
 		printf("%s\n", foo);
}
 }
