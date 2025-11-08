//WAP to convert string to integer.
#include<stdio.h>
int main(){
    char str[100];
    int i=0,num=0,sign=1,valid=1;
    printf("Enter a numeric string : ");
    scanf("%s",str);
    if(str[0]=='-'){
    sign=-1;
    i=1;
    }
    while(str[i]!='\0'){
        if(str[i]>='0'){
            if(str[i]<='9'){
                num=num*10 +(str[i]-'0');
            }else{
                valid=0;
                break;
            }
        }
        i++;
    }
    if(valid==1){
        printf("Coverted integer :%d\n",num*sign);
    }else{
        printf("Invalid input! contains letters or symbols.\n");
    }
    return 0;
}