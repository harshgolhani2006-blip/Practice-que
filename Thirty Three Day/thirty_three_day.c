//Wap to find group anagrams together.
#include <stdio.h>
#include <string.h>

// Function to sort a string (simple bubble sort)
void sortString(char str[]) {
    int i, j;
    char temp;
    int len = strlen(str);
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

// Function to manually copy strings
void copyString(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to manually compare two strings
int compareString(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i])
            return 0; // not equal
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0')
        return 1; // equal
    return 0;
}

int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[50][50];
    char sorted[50][50];
    int used[50] = {0};

    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
        copyString(sorted[i], words[i]);
        sortString(sorted[i]);
    }

    printf("\nGrouped Anagrams:\n");
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;

        printf("[ %s ", words[i]);
        used[i] = 1;

        for (int j = i + 1; j < n; j++) {
            if (!used[j] && compareString(sorted[i], sorted[j])) {
                printf("%s ", words[j]);
                used[j] = 1;
            }
        }
        printf("]\n");
    }

    return 0;
}
