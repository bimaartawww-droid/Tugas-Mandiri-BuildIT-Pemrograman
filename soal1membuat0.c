#include <stdio.h>   

int main(void) {
    int n;
    scanf("%d", &n);
    
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);
        sum += x;
    }
    
    long long ans = (sum < 0) ? -sum : sum;
    
    printf("%lld\n", ans);
    
    return 0;
}