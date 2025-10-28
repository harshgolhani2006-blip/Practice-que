//Wap to find intersection of two sorted array.
#include<stdio.h>
int main(){
    int n1,n2,i,j;
    int arr1[100],arr2[100];
     
    printf("Enter number of first element :");
    scanf("%d",&n1);
    printf("Enter %d element of first array :",n1);
    for(i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
    }
    printf("Enter number of second elemnt :");
    scanf("%d",&n2);
    printf("Enter %d elemnt of second array :",n2);
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    i=j=0;
    printf("Intersection element of two sorted array :");
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            printf("%d ",arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        i++;
        else 
        j++;
    }
    return 0;
}