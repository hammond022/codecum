#include <stdio.h>

int main()
{
    int foo;

    printf("Enter array size: ");
    scanf("%i", &foo);
    int bar[foo];
    printf("Enter elements of the array: \n");
    for (int i = 0; i < foo; i++)
    {
        scanf("%i", &bar[i]);
    }
    printf("Enter an index: ");
    scanf("%i", &foo);
    printf("%i", bar[foo]);
}