#include <stdio.h>

int main(){
    int foo,i;
    printf("Enter the size of the array: ");
        scanf("%i", &foo);
    int bar[foo];

    for( i = 0; i < foo ; i++){
        printf("Enter element #%i: ", i+1);
            scanf("%i", &bar[i]);
    }
    int k = 0;
    for( i = 0 ; i < foo ; i++){
        if( k == 1)printf(", ");
        printf("%i", bar[i]);
        k = 1;
    }
}
