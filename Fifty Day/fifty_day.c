//Wap to print Boolean Matrix Problem.
#include<stdio.h>
int main(){
    int r,c;
    
    printf("Enter a rows: ");
    scanf("%d",&r);

    printf("Enter a columns: ");
    scanf("%d",&c);

    int matrix[r][c];
    int row[r],column[c];

//Initialize Matrix.
    for(int i=0;i<r;i++){
        row[i]=0;
        for(int j=0;j<c;j++){
            column[j]=0;
        }
    }

    //Input Matrix Element.
    printf("Enter Matrix element (0/1):\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    //Step1:Mark rows and columns that have a 1.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][j]==1){
                row[i]=1;
                column[j]=1;
            }
        }
    }

    //Step2: Update matrix based on marked row/column.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(row[i]==1||column[j]==1){
                matrix[i][j]=1;
            }
        }
    }

    //Output update matrix.
    printf("\nUpdate Boolean Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
