//WAP to find the all pairs with a given sum.
#include<stdio.h>
int main(){
    int n,i,j,sum;
    int arr[100];
    
    printf("Enter number of element :");
    scanf("%d",&n);
    printf("Enter %d elemnt of array :",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum of value :");
    scanf("%d",&sum);
    printf("Pairs with given sum %d are :\n",sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d , %d)\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}
