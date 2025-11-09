//Wap to Implement strstr().
#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i,j,k,found=0;

    printf("Enter main string :");
    scanf("%s",str1);

    printf("Enter substring :");
    scanf("%s",str2);

    for(i=0;str1[i]!='\0';i++){
        j=0;
        k=i;

        while(str2[j]!='\0'){
            if(str1[k]=='\0')
            break;

            if(str1[k]==str2[j]){
                k++;
                j++;
            }else{
                break;
            }
        }
        if(str2[j]=='\0'){
            found=1;
            printf("Substring found at position : %d\n",i);
            break;
        }
    }
    if(found==0)
    printf("Substring not found.\n");
    return 0;
}