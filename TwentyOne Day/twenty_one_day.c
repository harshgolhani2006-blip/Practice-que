//Wap to print the reverse a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],reverse[100];
    int i,j=0,len;

    printf("Enter a string : ");
    scanf("%s",str);

    len=strlen(str); //Find length

    // Reverse the string
    for(i =len-1;i>=0;i--){
        reverse[j]=str[i];
        j++;
    }
    reverse[j]='\0';  // Add null terminator

    printf("Reversed string: %s\n",reverse);
    printf("Length of string: %d\n",len);

    return 0;
}