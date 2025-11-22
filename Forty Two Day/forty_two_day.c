//Wap to print diagonal matrix.
#include<stdio.h>

int main(){
    int a[10][10];
    int n,i,j;

    printf("Enter size of square matrix: ");
    scanf("%d",&n);

    printf("Enter element of matrix:\n");
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nPrimaray Diagonal Matrix: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i][i]);
    }

    printf("\nSecondary Diagonal Matrix: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i][n-i-1]);
    }
    return 0;
}