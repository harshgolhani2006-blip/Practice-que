//Wap to print Snake pattern printing.
#include<stdio.h>
int main(){
    int arr[20][20];
    int row,column;

    printf("Enter a number of rows: ");
    scanf("%d",&row);

    printf("Enter a number of column: ");
    scanf("%d",&column);

    printf("Enter element of matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nSnake Pattern:\n");
    for(int i=0;i<row;i++){
        if(i%2==0){
            for(int j=0;j<column;j++){
                printf("%d ",arr[i][j]);
            }
        }else{
            for(int j=column-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}