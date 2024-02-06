#include <stdio.h>

int main(){
    int i, j, x, k;
    int row, column;
    printf("Enter number of rows: ");
        scanf("%i", &row);
    printf("Enter number of columns: ");
        scanf("%i", &column);
    int array[row][column];
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("Enter element at row %i, column %i: ", i, j);
                    scanf("%i", &array[i][j]);
        }
    }
    
    printf("Divisible by 3: ");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            if(array[i][j] % 3 == 0){
                if(k == 1)printf(", ");
                printf("%i", array[i][j]);
                k = 1;
            }
        }
    }
    printf("\nDivisible by 5: ");
    for(i = 0, k = 0; i < row; i++){
        for(j = 0; j < column; j++){
            if(array[i][j] % 5 == 0){
                if(k == 1)printf(", ");
                printf("%i", array[i][j]);
                k = 1;
            }
        }
    }
}
