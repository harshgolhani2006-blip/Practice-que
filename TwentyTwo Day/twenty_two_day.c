//WAP to check palindrome by using string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,len;

    printf("Enter a string :");
    scanf("%s",str);

    len=strlen(str);

    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            printf("It is not a Palindrome");
            return 0;
        }
    }
    printf("It is a Palindrome");
    return 0;
}