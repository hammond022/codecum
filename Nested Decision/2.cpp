#include <stdio.h>

int main(){
	int foo, bar;
	
	printf("Enter current pocket money: ");
		scanf("%i", &foo);
	
	
	
	if( foo < 0  ){
		printf("Stop lying, tell me what's in your pocket!");
	}
	else if(foo % 10 == 7){
		printf("%i\nSuch lucky money!", foo);
	}
	else{
		printf("%i\nJust normal money.", foo);
	}
}
