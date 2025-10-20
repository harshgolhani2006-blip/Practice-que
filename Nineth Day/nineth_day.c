//WAP to check if Array is sorted and Rotated.
#include<Stdio.h>
int main(){
    int arr[100];
    int n,i,count;

printf("Enter a number of element :");
scanf("%d",&n);

printf("Enter %d element of array :",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
 printf("Array element :");
for(i=0;i<n;i++){
    printf(" %d ",arr[i]);
}
count=0;
for(i=0;i<n-1;i++){
    if(arr[i]>arr[i+1])
    count++;
}
printf("\n");
if(arr[n-1]>arr[0])
count++;
if(count==1){
    printf("Array element  is sorted and rotated.\n");
}
else{
    printf("Array element is not sorted and rotated.\n");
}
return 0;
}
