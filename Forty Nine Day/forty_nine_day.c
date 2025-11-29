//Wap to find maximum size rectangle of all 1s binary matrix.
#include <stdio.h>

int main() {
    int r,c;
    printf("Enter rows: ");
    scanf("%d",&r);
    printf("Enter cols: ");
    scanf("%d",&c);

    int a[r][c];
    printf("Enter matrix (0/1):\n");
    for (int i=0; i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int maxArea=0;

    // check every possible top-left corner
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){

            // only start if cell is 1
            if (a[i][j]==1){
                int minWidth=c;

                // extend rectangle downward
                for (int k=i;k<r && a[k][j]==1;k++){

                    // count width of 1s in current row
                    int width=0;
                    for (int m=j;m<c && a[k][m]==1;m++)
                        width++;

                    if (width<minWidth)
                        minWidth=width;

                    int height=k-i+1;
                    int area=minWidth*height;

                    if (area>maxArea)
                        maxArea=area;
                }
            }
        }
    }

    printf("\nMaximum rectangle of 1s = %d\n", maxArea);
    return 0;
}
