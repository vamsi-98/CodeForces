#include <cstdio>

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);

    int power = 0;
    while(n%k == 0)
    {
        n = n/k;
        power++;
    }

    printf(n > 1 ? "NO\n" : "YES\n%d\n", power - 1);
    return 0;
}
