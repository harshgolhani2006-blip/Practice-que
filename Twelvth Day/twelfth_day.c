//WAP to count the number of occurrences of an element.
#include<stdio.h>
int main(){
    int n,i,num,count=0;
    int arr[100];

    printf("Enter number of element :");
    scanf("%d",&n);

    printf("Enter %d element of array :",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter element to count :");
    scanf("%d",&num);
     
    for (i=0;i<n;i++){
        if(arr[i]==num){
            count++;
        }
    }
    printf("\nElement %d found %d times in array .\n",num,count);
    return 0;
}