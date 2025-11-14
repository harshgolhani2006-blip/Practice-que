// Wap to check if a string is a rotation of another string.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100],s2[100],temp[200];
    int i, j, k;

    printf("Enter first string: ");
    scanf("%s",s1);

    printf("Enter second string: ");
    scanf("%s",s2);

    int len1=strlen(s1);
    int len2=strlen(s2);

    if (len1!=len2) {
        printf("It is not rotation.\n");
        return 0;
    }

    // Create temp = s1 + s1
    for (i=0;i<len1;i++)
        temp[i]=s1[i];

    for(i=0;i<len1;i++)
        temp[len1+i]=s1[i];

    temp[len1*2]='\0';

    int found=0;
    int index=-1;

    // Check for rotation
    for(i=0;i<len1*2;i++) {
        if(temp[i]==s2[0]){

            j=i;
            k=0;

            while(k<len2){
                if(temp[j]!=s2[k])
                    break;
                j++;
                k++;
            }

            if(k==len2) {
                found=1;
                index=i;
                break;
            }
        }
    }

    if(found) {
        printf("It is rotation.\n");
        printf("Rotation found at index: %d\n", index);

        printf("Rotated part: ");
        for (i=index;i<index+len2;i++)
            printf("%c",temp[i]);

        printf("\n");
    }
    else{
        printf("It is not rotation.\n");
    }

    return 0;
}
