//WRITE A PROGRAM TO MOVE ALL NEGATIVE NUMBERS TO THE BEGINNING AND POSITIVE TO THE END IN AN ARRAY
#include <stdio.h>
int main(){
    int n,i,j=0;
    int arr[100],temp[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){  //separating positive and negative numbers
        if(arr[i]<0){
            temp[j]=arr[i];
            j++;
        }
    }
    for(i=0;i<n;i++){  //separating positive and negative numbers
        if(arr[i]>=0){
            temp[j]=arr[i];
            j++;
        }
    }
    printf("Array after moving negative numbers to the beginning: ");
    for(i=0;i<n;i++){
        printf("%d ",temp[i]);
    }
    return 0;
}