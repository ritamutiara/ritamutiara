#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 int n, i, j, indeks;
    scanf("%d", &n);
    int angka[n], urut[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &angka[i]);
    }

    for(i = 0; i < n; i++) {
        indeks = 0;
        for(j = 0; j < n; j++) {
            if(angka[i] > angka[j]) {
                indeks += 1;
            }
        }
        urut[indeks] = angka[i];
    }
    
    for(i = 0; i < n; i ++) {
        printf("%d\n", urut[i]);
    }

    return 0;
}
