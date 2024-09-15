#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);

    if (N <= 1) {
        printf("BUKAN\n");
        return 0;
    }

    int prima = 1;

    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            prima = 0;
            break;
        }
    }

    if (prima) {
        printf("PRIMA\n");
    } 
    else {
        printf("BUKAN\n");
    }
   
    return 0;
}