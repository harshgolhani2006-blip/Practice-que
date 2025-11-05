//WAP to check if two string are anagrams.
#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100];
    int count[26]={0}; 
    int i;
    printf("Enter first string :");
    scanf("%s",str1);
    
    printf("Enter second string :");
    scanf("%s",str2);

    //If lengths difffer,they can not be anagrams.
    if(strlen(str1)!=strlen(str2)){
        printf("It is not a Anagrams.");
        return 0;
    }
    //count characters in str1
    for(i=0;str1[i]!='\0';i++){
        count[str1[i]-'a']++;
    }
    //substract frequency using str2.
    for(i=0;str2[i]!='\0';i++){
        count[str2[i]-'a']--;
    }
    //Check if all count are zero
    for(i=0;i<26;i++){
        if(count[i]!=0){
            printf("It is not Amagrams.");
            return 0;
        }
    }
    printf("It is a Anagarams.");
    return 0;
}