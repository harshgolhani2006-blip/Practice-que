//WAP to find maximum product.
#include<stdio.h>
int maxProduct(int arr[],int n){
    int max=arr[0];
    int maxend=arr[0];
    int minend=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0){
            int temp=maxend;
            maxend=minend;
            minend=temp;
        }
        if(arr[i]>maxend*arr[i])
      maxend=arr[i];
      else
      maxend=maxend*arr[i];
      if(arr[i]<minend*arr[i])
      minend=arr[i];
      else
      minend=minend*arr[i];
      if(maxend>max)
      max=maxend;
    }
    return max;
}
int main(){
    int arr[100],n;
    printf("Enter number of element :");
    scanf("%d",&n);
    printf("Enter %d element of array :",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=maxProduct(arr,n);
    printf("Maximum product of subarray : %d\n",result);
    return 0;
}