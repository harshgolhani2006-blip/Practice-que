#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    int i=0,j=0;

    printf("Enter First string(subsequence): ");
    scanf("%s",str1);
    
    printf("Enter second string(main): ");
    scanf("%s",str2);

    int len1=strlen(str1);
    int len2=strlen(str2);

    while (i<len1 && j<len2){
        if(str1[i]==str2[j]){
            i++;
        }
        j++;
    }
    if(i==len1){
        printf("Yes,'%s' is a Subesequence of '%s'.\n",str1,str2);
    }else{
        printf("No,'%s' is not a Subsequence of '%s'.\n",str1,str2);
    }
    return 0;
}