#include <stdio.h>

int main(){
    int foo;

    printf("Enter array size: ");
        scanf("%i", &foo);
    printf("Enter elements of the array: \n");
    int bar[foo];
    for(int i = 0; i < foo ; i++){
        scanf("%i", &bar[i]);
    }
    printf("Last element: %i", bar[foo -= 1]);
}
