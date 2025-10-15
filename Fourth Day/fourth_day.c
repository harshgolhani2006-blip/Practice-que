//Sort an array of 0s, 1s and 2s
#include<stdio.h>
int main(){
    int n,i;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int low=0,mid=0,high=n-1,temp;
    while(mid<=high){
        if(arr[mid]==0){
            temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
        }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}