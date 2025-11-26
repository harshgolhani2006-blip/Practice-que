//Wap to Search a 2D Matrix.
#include<stdio.h>
int main(){
    int r,c,target;
    int arr[10][10];

    printf("Enter row and column: ");
    scanf("%d %d",&r,&c);

    printf("Enter matrix element:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter target element: ");
    scanf("%d",&target);

    int low=0,high=r*c-1;
    int found=0;

    while(low<=high){
        int mid=low+(high-low)/2; 

        int row=mid/c;
        int col=mid%c;

        int value=arr[row][col];

        if(value==target){
            found=1;
            break;
        }else{
            high=mid-1;  
        }
    }
    if(found){
        printf("Target is found!.\n");
    }else{
        printf("Target is not found.\n");
    }
    return 0;
}