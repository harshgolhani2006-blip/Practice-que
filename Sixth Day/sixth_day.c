// WAP TO FIND union AND INTERSECTION OF TWO ARRAYS
#include<stdio.h>
int main(){
    int a[100],b[100],num1,num2;
    int i,j,k=0,l=0;
    int union_arr[200],intersect_arr[100];  
    printf("Enter size of first array: ");
    scanf("%d",&num1);
    printf("Enter  %d elements of first array: ",num1);
    for(i=0;i<num1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&num2);
    printf("Enter  %d elements of second array: ",num2);
    for(i=0;i<num2;i++){
        scanf("%d",&b[i]);
    }  
    for(i=0;i<num1;i++){
        union_arr[k]=a[i];
        k++;
    } 
    for(i=0;i<num2;i++){
        int found=0;
        for(j=0;j<num1;j++){
            if(b[i]==a[j]){
                found=1;
                break;
            }
    }
    if(found==0){
        union_arr[k]=b[i]; 
        k++;
       }
       for(i=0;i<num2;i++){
        for(j=0;j<num1;j++){
            if(b[i]==a[j]){
                intersect_arr[l]=b[i];
                l++;
                break;
            }
        }
}
    }
printf("\nunion of two arrays is: ");
for(i=0;i<k;i++){
    printf("%d ",union_arr[i]);
}
printf("\nintersection of two arrays is: ");
for(i=0;i<l;i++){
    printf("%d ",intersect_arr[i]);
}

return 0;
}