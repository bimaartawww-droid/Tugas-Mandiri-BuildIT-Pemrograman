#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long arr[3] = {a, b, c};
    long long temp;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    long long x = arr[0], y = arr[1], z = arr[2];

    long long turunZ = z - y;  
    long long naikX  = y - x;   

    long long ronde = (turunZ < naikX) ? turunZ : naikX;

    printf("%lld\n", ronde);

    return 0;
}