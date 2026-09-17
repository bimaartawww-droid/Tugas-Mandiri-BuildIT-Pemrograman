#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

const long long MOD = 1000000007;

int cmp(const void *a, const void *b) {
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    long long *arr = (long long*) malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    qsort(arr, n, sizeof(long long), cmp);
    long long totalPasangan = ((long long)n * (n - 1) / 2) % MOD;
    
    long long pasanganSama = 0;
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n && arr[j] == arr[i]) {
            j++;
        }
        long long cnt = j - i;
        long long pasanganGrup = (cnt * (cnt - 1) / 2) % MOD;
        pasanganSama = (pasanganSama + pasanganGrup) % MOD;
        i = j;
    }

    long long jawaban = ((totalPasangan - pasanganSama) % MOD + MOD) % MOD;

    printf("%lld\n", jawaban);

    free(arr);    
    return 0;
}