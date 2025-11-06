//WAP to count and say problems.
#include<stdio.h>
#include<string.h>

void countAndSay(int n){
    char str[1000]="1";
    char temp[1000];
    
    for(int term=1;term<n;term++){
        int len=strlen(str);
        int k=0;
        int i=0;

        while(i<len){
            char current=str[i];
            int count=0;

            while(i<len){
                if(str[i]!=current)
                break;
                count++;
                i++;
            }
            temp[k]=count+'0';
            k++;
            temp[k]=current;
            k++;
        }
        temp[k]='\0';

        int j=0;
        while (temp[j]!='\0')
        {
            str[j]=temp[j];
            j++;
        }
        str[j]='\0';
}
printf("Term %d : %s\n",n,str);
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    countAndSay(n);
    return 0;
}