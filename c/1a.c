#include<stdio.h>
#include<math.h>

int main(){
    long long m, n, a;
    scanf("%lld %lld %lld", &m, &n, &a);
    long long l=(n+a-1)/a;
    long long b=(m+a-1)/a;

    printf("%lld",l*b);
    return 0;
}