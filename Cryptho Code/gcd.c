#include <stdio.h>
int gcd(int a, int b)
{
    int m = a>b?b:a;
    int r;
    for(r = m; r >0; r --)
        if(a%r==0 && b%r == 0)
            break;
    return r;
}

int main()
{
    long int a,b,g;
    scanf("%ld %ld",&a,&b);
    g = gcd(a,b);
    printf("最大公约数=%ld, 最小公倍数=%ld\n", g,a/g*b);
}
