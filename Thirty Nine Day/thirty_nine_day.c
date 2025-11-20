//Spriral traversal of matrix.
#include <stdio.h>

int main() {
    int n, m;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Enter number of columns: ");
    scanf("%d", &m);

    int a[n][m];

    // Input matrix
    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;

    printf("\nSpiral Traversal:\n");

    while(top <= bottom && left <= right) {

        // Step 1: Left → Right (Top row)
        for(int i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;

        // Step 2: Top → Bottom (Right column)
        for(int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        if(top <= bottom) {
            // Step 3: Right → Left (Bottom row)
            for(int i = right; i >= left; i--)
                printf("%d ", a[bottom][i]);
            bottom--;
        }

        if(left <= right) {
            // Step 4: Bottom → Top (Left column)
            for(int i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }

    return 0;
}
