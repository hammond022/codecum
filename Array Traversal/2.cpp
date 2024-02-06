#include <stdio.h>

int main(){
    int foo, bar, i;
    printf("Enter the size of the arrays: ");
        scanf("%i", &foo);

    int arr1[foo];
    int arr2[foo];
    
    printf("Enter the elements of the first array: \n");
    for(i = 0; i < foo; i++){
        printf("Enter element #%i: ", i+1);
            scanf("%i", &arr1[i]);
    }
    printf("Enter the elements of the second array: \n");
    for(i = 0; i < foo; i++){
        printf("Enter element #%i: ", i+1);
            scanf("%i", &arr2[i]);
    }
    for(i = 0; i < foo; i++){
        printf("%i + %i = %i\n", arr1[i], arr2[i],  (arr1[i] + arr2[i]));
    }
}
