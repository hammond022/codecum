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
    int biggest = 0;
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            if(biggest < array[i][j])biggest= array[i][j];
        }
    }
    printf("Largest: %i", biggest);
}
