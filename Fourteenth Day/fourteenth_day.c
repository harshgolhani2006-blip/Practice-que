//WAP to Subarray with given sum.
#include<stdio.h>
int main(){
    int n,i;
    int sum,curr_sum=0,start=0;
    int arr[100];

    printf("Enter number of element :");
    scanf("%d",&n);
    printf("Enter %d element of array :",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter target sum :");
    scanf("%d",&sum);

    for(i=0;i<n;i++){
        curr_sum=curr_sum+arr[i];
        while (curr_sum>sum && start<i )
        {
                curr_sum =curr_sum-arr[start];
                start++;
        }   
    if(curr_sum==sum){
        printf("Subarray found from index %d to %d\n",start,i);
        printf("Element : ");
        for(int j=start;j<=i;j++){
            printf("%d ",arr[j]);
        }
        printf("\n");
        return 0;
    }
}
    printf("NO subarray found with the given sum.\n");
    return 0;
}