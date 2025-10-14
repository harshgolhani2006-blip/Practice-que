//c program to print elements of an array in reverse order
#include<stdio.h>
int main(){
    int arr[100];
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){   
        scanf("%d",&arr[i]);
    }
    printf("The elements in original order are: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe elements in reverse order are: ");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}