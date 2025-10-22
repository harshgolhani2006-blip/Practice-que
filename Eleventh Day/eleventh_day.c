//WAP to Rearrange array in alternating positive or negative items.
#include<stdio.h>
int main(){
    int arr[100];
    int n,i,j,temp;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements of array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // Separate negatives and positives
    j = 0;
    for(i=0;i<n;i++){
        if(arr[i]<0){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }

    // Now negatives are at beginning, positives at end
    int pos=j;
    int neg=0;

    // Rearrange in alternating order
    while(neg<pos&&pos<n){
        temp=arr[neg+1];
        arr[neg+1]=arr[pos];
        arr[pos]=temp;
        pos++;
        neg=neg+2;
    }

    printf("\nRearranged array (alternating + and -): ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
