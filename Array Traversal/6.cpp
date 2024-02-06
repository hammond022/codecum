#include <stdio.h>

int main(){
    int foo, i;

    printf("Enter the size of the array: ");
        scanf("%i", &foo);
    int bar[foo];
    for(i = 0; i < foo; i++){
        printf("Enter element #%i: ", i + 1);
            scanf("%i", &bar[i]);
    }
    int k = 0;
    printf("Even: ");
    for(i = 0 ; i < foo ; i++){   
        if(bar[i] % 2 == 0){
            if(k ==  1)printf(", ");
            printf("%i", bar[i]);
            k = 1;}
        }
    k = 0;
    printf("\nOdd: ");
    for(i = 0 ; i < foo ; i++){   
        if(bar[i] % 2 != 0){
            if(k ==  1)printf(", ");
            printf("%i", bar[i]);
            k = 1;}
        }

}


