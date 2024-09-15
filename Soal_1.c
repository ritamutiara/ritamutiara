#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, j, key;
    scanf("%d", &n);

    int angka[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &angka[i]);
    }

    for (i = 1; i < n; i++) {
        key = angka[i];
        j = i - 1;

        while (j >= 0 && angka[j] > key) {
            angka[j + 1] = angka[j];
            j--;
        }
        angka[j + 1] = key;
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", angka[i]);
    }
  
    return 0;
}
