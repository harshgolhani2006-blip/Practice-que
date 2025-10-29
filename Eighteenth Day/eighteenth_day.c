//WAP to trapping rain water.
#include<stdio.h>
int main(){
    int n,i;
    int height[100],left,left_max,right,right_max;

    printf("Enter number of bars :");
    scanf("%d",&n);
    
    printf("Enter height of bars :");
    for(i=0;i<n;i++){
        scanf("%d",&height[i]);
    }
    left=0,right=n-1;
    left_max=0;right_max=0;
    int water=0;
    while(left<=right){
        if(height[left]<=height[right]){
            if(height[left]>=left_max){
            left_max=height[left];
            }else{
                water=water+left_max-height[left];
            } 
            left++; // ✅ move left pointer forward
        }else{
            if(height[right]>=right_max){
                right_max=height[right];
            }else{
                water=water+right_max-height[right];
            }
            right--; // ✅ move right pointer backward
        }
    }
    printf("Total trapping water : %d\n",water);
    return 0;
}
