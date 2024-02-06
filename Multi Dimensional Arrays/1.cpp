#include<stdio.h>

int main(void) {
    int numArray[2][4] = {{1, 2, 3, 4}, {3, 5, 7, 9}};

    int foo = (sizeof(numArray)/sizeof(numArray[0][0])) /
            (sizeof(numArray) / sizeof(numArray[0]));
    // Hey there, start typing your C code here...
    for(int i = 0; i < foo;i++){
        printf("%i", numArray[0][i]);
        if( i < foo -1)printf(", ");
        else break;
       }
    printf("\n");
    for(int i = 0;  i < foo; i++){
        printf("%i", numArray[1][i]);
        if( i < foo -1)printf(", ");
        else break;
       }
}
