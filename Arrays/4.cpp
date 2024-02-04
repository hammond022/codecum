#include<stdio.h>

int main(void) {
    float numArr[] = {3.14, 9.2, 8.812, 10.5, 0.4, -23.23, -1.56, 12.3, 9.45, -0.968};

    numArr[2] = numArr[0] * numArr[4];
    printf("%.2f", numArr[2]);
    // Hey there, start typing your C code here...
}
