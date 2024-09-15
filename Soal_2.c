#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char strA[100], strB[100];

    scanf("%s", strA);

    scanf("%s", strB);

    int lenA = strlen(strA);
    int lenB = strlen(strB);

    if (lenA == lenB) {
 
        int identical = 1;
        for (int i = 0; i < lenA; i++) {
            if (strA[i] != strB[i]) {
                identical = 0;
                break;
            }
        }
        if (identical) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    } else {
        printf("BERBEDA\n");
    }   
    return 0;
}