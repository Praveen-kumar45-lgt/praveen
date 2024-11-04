#include <stdio.h>
void transpose(int matrix[10][10],int rows,int cols){
    int i,j;
    printf("the transpose of matrix is \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
         printf("%d",matrix[j][i]);
        }
        printf("\n");
    }
    printf("the original matrix is \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d",matrix[i][j]);
        }
    printf("\n");
    }
}
void main(){
    int i,j,rows,cols,matrix[10][10];
    printf("enter the rows and coloums of the matrix:\n");
    scanf("%d %d",&rows,&cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Enter the element of matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    transpose(matrix,rows,cols);
}
