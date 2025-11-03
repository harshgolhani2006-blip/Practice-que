//Wap to remove duplicate from a string.
#include<stdio.h>
#include<string.h>
int main(){

char str[100],result[100];
int i,j,k=0;

printf("Enter a string : ");
scanf("%s",str);

for(i=0;str[i]!='\0';i++){
    for(j=0;j<i;j++){
        if(str[i]==str[j])
        break;
    }
    if(i==j){
        result[k]=str[i];
        k++;
    }
}
result[k]='\0';

printf("After removing duplicate : %s",result);

return 0;
}