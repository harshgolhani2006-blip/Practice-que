//WAP to find longest common prefix.
#include<stdio.h>
#include<string.h>

int main(){
    char str[100][100],prefix[100];
    int i,n,j=0;
    printf("Enter a size of string :");
    scanf("%d",&n);

    printf("Enter Strings :\n");
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    //Copy first string .
    while(str[0][j]!='\0'){
        prefix[j]=str[0][j];
        j++;
    }
    prefix[j]='\0'; //Null terminate.
    for(i=1;i<n;i++){
        int k=0;
        while(1){
            if(prefix[k]=='\0')
            break;
            if(str[i][k]=='\0')
            break;
            if(prefix[k]!=str[i][k])         
             break;
            k++;
        }
        prefix[k]='\0'; //Cut extra part.
        if(prefix[0]=='\0') //No common prefix.
        break;
    }
    if(prefix[0]=='\0'){
    printf("Common prefix not found.\n");
}
else{
    printf("Longest Common Prefix :%s\n",prefix);
    }
    return 0;
}
