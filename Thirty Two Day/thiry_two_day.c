// WAP to print longest substring without repeating characters
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len, max = 0, startindex = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // check if substring from i to j has duplicate
            for (k = i; k < j; k++) {
                if (str[k] == str[j])
                    break;
            }
            if (k != j)
                break; // duplicate found, stop extending substring

            // if current substring length > max, update
            if (j - i + 1 > max) {
                max = j - i + 1;
                startindex = i; // store starting index of longest substring
            }
        }
    }
    printf("\nLength of longest substring without repeating characters: %d\n", max);
    printf("Longest substring: ");
    for (i = startindex; i < startindex + max; i++)
        printf("%c", str[i]);
    printf("\n");

    return 0;
}
