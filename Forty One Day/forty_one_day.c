//Wap to entire row and column to 0 if any element is 0.
#include<stdio.h>
int main(){
    int a[10][10];
    int r,c;

    printf("Enter row and columns: ");
    scanf("%d %d",&r,&c);

    printf("Enter matrix element: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int row[10],col[10];

    for(int i=0;i<r;i++)row[i]=0;
    for(int j=0;j<c;j++)col[j]=0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(row[i]==1 || col[j]==1){
                a[i][j]=0;
            }
        }
    }
    printf("Final Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}