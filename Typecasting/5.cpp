#include <stdio.h>

int main(void) {
	int x = 5;
    int y = 7;
    
    float foo = (float)x;
    float bar = (float)y;
    
    foo /= bar;
    
    printf("%.3f", foo);
    
}
