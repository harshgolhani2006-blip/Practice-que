//WAP to print all permutations of a string.
#include<stdio.h>
#include<string.h>

//Function to swap two characters
void swap(char str[],int i,int j){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
//Recursive function to print all permulations
void permute(char str[],int l,int r){
    if(l==r){
        printf("%s\n",str);
    }else{
        for(int i=l;i<=r;i++){
            swap(str,l,i);// swap by index
            permute(str,l+1,r); //recursive call;
            swap(str,l,i); //backtrack to original
        }
    }
}
int main(){
    char str[100];
    int len;
    printf("Enter a string :");
    scanf("%s",str);
    len=strlen(str);

    printf("\nAll permutations of the string are :\n");
    permute(str,0,len-1);
    return 0;

}