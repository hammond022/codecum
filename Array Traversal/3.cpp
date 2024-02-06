#include <stdio.h>

int main(){
    int i, foo, x;

    printf("Enter the size of the array: ");
        scanf("%i", &foo);
    int bar[foo];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < foo; i++){
        printf("Enter element #%i: ", i + 1);
            scanf("%i", &bar[i]);
}
    printf("Enter a value to search for: ");
        scanf("%i", &x);
    for(i = 0; i < foo; i++){
        if( x == bar[i]){
            printf("Found!"); return 0;
        }
    }
    printf("Sorry, %i not found.", x);
    
}
