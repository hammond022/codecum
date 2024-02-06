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
    int sum = 0;
   
    for(i = 0; i < foo; i++){
        sum += bar[i];
    }
    float avg = (float)sum / foo;
    printf("Sum: %i\n", sum);
    printf("Average: %.2f", avg);
}
