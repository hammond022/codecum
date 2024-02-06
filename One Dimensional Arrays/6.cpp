#include <stdio.h>

int main(){
    int foo;
    printf("Enter array size: ");
        scanf("%i", &foo);
    int bar[foo];
    printf("Enter elements of the array: \n");
    for(int i = 0; i < foo; i++){
        scanf("%i", &bar[i]);
    }
    
    if(foo % 2 == 0){
        printf("Medians: %i and %i", bar[(foo/2) -1], bar[foo/2]);
    }else{
        printf("Median: %i", bar[(foo/2)]);
    }
}
