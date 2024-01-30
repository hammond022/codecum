#include <stdio.h>

int main(){
    int x,y,z;

    printf("Enter x: ");
    	scanf("%i", &x);
    printf("Enter y: ");
    	scanf("%i", &y);
    printf("Enter z: ");
    	scanf("%i", &z);
    x -= y;
    x -= z;
    
    printf("%i", x);
    
}
