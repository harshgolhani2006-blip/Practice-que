//WAP to move in cyclically rotate an array 
#include<stdio.h>
int main(){
    int n,i,temp;
    int arr[100];
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter %d element of array :",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
     }
      arr[0]=temp;
    printf("After Rotation :");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}