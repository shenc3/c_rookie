#include <stdio.h>

#define M 101 
#define N 2

int main() {
    int a[M][N], b[M][N];
    int pow, factor, m, n;
    int i = 0, j = 0;
    int nonzero = 1, max = 0;
    
    do {
        scanf("%d %d", &pow, &factor);
        if ( factor == 0)
            continue;
        a[i][0] = pow;
        a[i][1] = factor;
        i++;
    }while( pow > 0)

    do {
        scanf("%d %d", &pow, &factor);
        if ( factor == 0)
            continue;
        b[i][0] = pow;
        b[i][1] = factor;
        i++;
    } while ( pow > 0)

    // printf("Nonzero in a = %d\n", nonzero);

    return 0;
}