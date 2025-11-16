//Wap to Transpose of a matrix.
#include<stdio.h>
int main(){
    int a[10][10],transpose[10][10];
    int r,c,i,j;
    
    //Input row & columns.
    printf("Enter number of rows: ");
    scanf("%d",&r);

    printf("Enter number of columns: ");
    scanf("%d",&c);

    //Input matrix.
    printf("Enter element of matrix:\n ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     //Transpose logic.
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            transpose[j][i]=a[i][j];
        }
     }
     //print original matrix.
     printf("\nOriginal Matrix:\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
     //print Transpose Matrix.
     printf("\nTranspose Matrix:\n");
     for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
     }
     return 0;
}