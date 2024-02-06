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

    for(j = 0; j < column; j++){
        for(i = 0; i < row; i++){
            printf("%i ", array[i][j]);
        }
        printf("\n");
    }
}
