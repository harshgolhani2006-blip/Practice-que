//Wap to find median in a row-wise sorted matrix.
#include<stdio.h>
int main(){
    int r,c;

    printf("Enter a number of row: ");
    scanf("%d",&r);
    printf("Enter a number of columns: ");
    scanf("%d",&c);

int matrix[r][c];
    int arr[r*c];
    int k=0;

    printf("Enter matrix element :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
            arr[k++]=matrix[i][j]; // sorted array.
        }
    }

    for(int i=0;i<r*c-1;i++){
        for(int j=0;j<r*c-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int median =arr[(r*c)/2];

    printf("Median of matrix = %d\n",median);
    return 0;
}