//WAP to Kadane's algorithm-maximum subarra sum.
#include<stdio.h>
int main(){
    int n,i;
    int arr[100];
    int max_sum,current_sum;
    printf("Enter number of element :");
    scanf("%d",&n);
    printf("Enter %d element of array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max_sum=arr[0];
    current_sum=0;
    for(i=0;i<n;i++){
        current_sum=current_sum+arr[i];
        if(current_sum>max_sum)
        max_sum=current_sum;
        if(current_sum<0)
        current_sum=0;
    }
    printf("Maximum subarray sum = %d\n",max_sum);
    return 0;
}