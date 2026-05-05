#include <stdio.h> 
#include <math.h>

int main()
{
    int i, n, r = 1;
    printf("digite um numero para saber seu fatorial!:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        r = r * i;
    }
    printf("o fatorial de %d eh %d", n, r);
    return 0;
}
