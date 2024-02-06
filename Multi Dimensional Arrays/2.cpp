#include <stdio.h>

int main(){
    int i, j;
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
    for(i = row -1; i >= 0; i--){
        for(j = column -1; j >= 0; j--){
            printf("%i\t", array[i][j] );

        }
        printf("\n");
    }
}
