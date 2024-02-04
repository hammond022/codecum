#include <stdio.h>

int main(){
    int foo, bar;

    printf("Enter size of the first array: ");
        scanf("%i", &foo);
    int eggs[foo];
    for( int i = 0; i < foo; i++){
        scanf("%i", &eggs[i]);
    }
    
    printf("Enter size of the second array: ");
        scanf("%i", &bar);
    int spam[bar];
    for(int i = 0; i < bar; i++){
        scanf("%i", &spam[i]);
    }
    printf("Sum of first and last: %i\n", eggs[0] + spam[bar - 1] );
    printf("Product of second and second to the last: %i", eggs[1] * spam[bar-2]);
}
