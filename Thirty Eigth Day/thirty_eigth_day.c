//Wap to search in row wise and column wise sorted matrix.
#include<stdio.h>
int main(){
    int a[10][10];
    int r,c,i,j;
    int target,n=0,m=c-1,found=0;
    
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
    printf("Enter a target :");
     scanf("%d",&target);

     while(n<r && m>=0){
        if(a[n][m]== target){
            found=1;
            break;
        }else if(a[n][m]>target){
            m--;
        }else{
            n++;
        }
     }
     if(found==1){
        printf("Element are found.");
     }else{
        printf("Element are not found.");
     }
     return 1;
}