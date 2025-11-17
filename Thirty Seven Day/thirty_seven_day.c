//Wap to Rotate Matrix by 90 Degree clockwise.
#include<stdio.h>
int main(){
    int a[50][50];
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);

    //Input.
    printf("Enter matrix element:\n ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Step1: Transpose.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //step2: Reverse Each row.
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp=a[i][j];
            a[i][j]=a[i][n-1-j];
            a[i][n-1-j]=temp;
        }
    }
    //output.
    printf("\nMatrix After 90 degree clockwise rotation:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}