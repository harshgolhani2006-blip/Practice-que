//WAP to find the duplicate number in array.
#include<stdio.h>
int main(){
int i,n,j,found;
int arr[100];
printf("Enter number of element :");
scanf("%d",&n);
printf("Enter %d elemnt of array :",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            printf("Duplicate element :%d\n",arr[i]);
            found==1;
            break;
        }
    }
}
if(found==0){
    printf("None!");
}
return 0;
}