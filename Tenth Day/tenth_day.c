//WAP to leaders in a array.
#include<stdio.h>
int main(){
    int n,i,j;
    int arr[100];
     
    printf("Enter a number of element :");
    scanf("%d",&n);
    printf("Enter %d element of a array :",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Leaders in the array are :");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j])
            break;
        }
        if(j==n)
        printf("%d ", arr[i]);
    }
    return 0;
}