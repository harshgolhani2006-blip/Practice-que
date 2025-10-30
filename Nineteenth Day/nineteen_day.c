#include <stdio.h>

int main() {
    int n, m, i, j, gap, a, b, temp;

    printf("Enter size of first array: ");
    scanf("%d", &n);
    int arr1[n];  // declare after reading n
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);
    int arr2[m];  // declare after reading m
    printf("Enter %d elements: ", m);
    for (i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    gap = (n + m + 1) / 2;

    while (gap > 0) {
        i = 0;
        j = gap;

        while (j < (n + m)) {
            if (i < n) a = arr1[i];
            else a = arr2[i - n];

            if (j < n) b = arr1[j];
            else b = arr2[j - n];

            if (a > b) {
                if (i < n && j < n) {
                    temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                } 
                else if (i < n && j >= n) {
                    temp = arr1[i];
                    arr1[i] = arr2[j - n];
                    arr2[j - n] = temp;
                } 
                else {
                    temp = arr2[i - n];
                    arr2[i - n] = arr2[j - n];
                    arr2[j - n] = temp;
                }
            }
            i++;
            j++;
        }

        if (gap == 1)
            gap = 0;
        else
            gap = (gap + 1) / 2;
    }

    printf("After merging:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    for (j = 0; j < m; j++)
        printf("%d ", arr2[j]);

    return 0;
}
