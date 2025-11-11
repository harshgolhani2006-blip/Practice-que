// Wao to Compress the string.
#include<stdio.h>
#include<string.h>
int main(){
    int i,j,count;
    char str[100];

    printf("Enter a strig :");
    scanf("%s",str);

    int len=strlen(str);

    printf("Compressed String :");
    for(i=0;i<len;i++){
        count=1;

        if(str[i]=='0')
        continue;
        for(j=i+1;j<len;j++){
            if(str[i]==str[j]){
                count++;
                str[j]='0';
            }
        }
        printf("%c%d",str[i],count);
    }
return 0;
}