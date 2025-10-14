//WAP find the "kth" maximum and minimum element in an array
#include <stdio.h>
int arr[100],n;
int i,j,k,temp;
void ArraySort(){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ArraySort();
    printf("Enter the value of k: ");
    scanf("%d",&k);
    if(k>n){
        printf("Invalid Input");
    }
    else{
        printf("%dth minimum element is: %d\n",k,arr[k-1]);
        printf("%dth maximum element is: %d",k,arr[n-k]);
    }
    return 0;
}