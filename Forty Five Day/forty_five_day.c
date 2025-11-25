//Wap to Pascal's Triangle.
#include<stdio.h>
int main(){
    int row,coef;

    printf("Enter the number of rows for pascal triangle: ");
    scanf("%d",&row);

    for(int i=0;i<row;i++){
        for(int space=1;space<=row-i;space++){  //For space .
            printf("  ");
        }

        coef = 1;   //First element for each row.

        for(int j=0;j<=i;j++){
            if(j==0){
                coef=1;   //First element of every row.
            }else{
                coef=coef*(i-j+1)/j;   //Calculate coefficient
            }
            printf(" %d ",coef);   //print the coeffficient 
        }

        printf("\n");  //Move to next line .
    }
    return 0;
}
