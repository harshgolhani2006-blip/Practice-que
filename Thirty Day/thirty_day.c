//WAp to Valid Palindrome after removing at most one character.
#include<stdio.h>
#include<string.h>
int palindrome(char str[],int left,int right){
    while (left<right)
    {
        if(str[left]!=str[right])
        return 0;
        left++;
        right--;
    }
    return 1;
}
int validpalindrome(char str[]) {
    int left=0;
    int right=strlen(str)-1;

    while(left<right){
        if (str[left]!=str[right]){
            // Check by removing one character from either side
            return palindrome(str,left+1,right) || palindrome(str,left,right-1);
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    char str[100];
    printf("Enter a string :");
    scanf("%s",str);
    if(validpalindrome(str))
    printf("True\n");
    else
    printf("False\n");
    return 0;
}