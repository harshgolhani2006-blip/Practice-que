//WAP to show the missing number in array[1 to n].
#include<stdio.h>
int main(){
    int i,n,j,min,max,missing,count=0;
    int arr[100];
    printf("Enter number of element :");
    scanf("%d",&n);
    printf("Enter %d element of array :",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
     printf("Missing number are : ");
    for(missing=min;missing<=max;missing++){
        for(j=0;j<n;j++){
            if(arr[j]==missing)
            break;
        }
        if(j==n){
            printf("%d ",missing);
            count++;
        }
    }
    if(count==0)
    printf("NO number missing in given range!\n");
    return 0;
}