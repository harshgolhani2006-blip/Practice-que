//Wap to print Boundary traversal matrix.
#include<stdio.h>
int main(){
    int r,c;
    int arr[10][10];

    printf("Enter number of row: ");
    scanf("%d",&r);

    printf("Enter number of column: ");
    scanf("%d",&c);

    printf("Enter element of matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);   
        }
    }

    printf("\nBoundary Traversal Of Matrix: ");

    //TOP ROW.
    for(int col=0;col<c;col++){
        printf("%d ",arr[0][col]);
    }

    //RIGHT COLUMN.
    for(int row=1;row<r;row++){
        printf("%d ",arr[row][c-1]);
    }

    //BOTTOM ROW 
    if(r>1){
        for(int col=c-2;col>=0;col--){   
            printf("%d ",arr[r-1][col]);
        }
    }

    //LEFT COLUMN.
    if(c>1){
        for(int row=r-2;row>0;row--){    
            printf("%d ",arr[row][0]);
        }
    }

    return 0;
}
