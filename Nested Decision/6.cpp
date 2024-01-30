#include <stdio.h>

int main(){
	int x, y, z;
	int nx, ny;
	
	printf("Enter x: ");scanf("%i", &x);
	printf("Enter y: ");scanf("%i", &y);
	printf("Enter z: ");scanf("%i", &z);
	
	if( x <= z && y >= z){printf("%i is just within %i and %i", z,x,y);} 
	else{nx = z - x; ny = y - z;
		if( nx > ny){printf("%i is farther from %i", z,x);}
		else if(nx < ny){printf("%i is farther from %i", z, y);}}
}
