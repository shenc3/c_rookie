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
    }while( pow > 0);

    do {
        scanf("%d %d", &pow, &factor);
        if ( factor == 0)
            continue;
        b[j][0] = pow;
        b[j][1] = factor;
        j++;
    } while ( pow > 0);

    // printf("Nonzero in a = %d\n", nonzero);
    for ( m = 0, n = 0; ( m < i ) & ( n < j ); ) {
    	if ( ( m == i-1 ) & ( n == j-1 ) ) {
            printf("%d", b[n][1] + a[m][1]);
            m++;
            n++;
		}
    	else {
	        if ( a[m][0] > b[n][0] ) {
	        	if ( a[m][0] == 1) {
	        		printf("%dx", a[m][1]);
	        		m++;
				}
				else {
		            printf("%dx%d", a[m][1], a[m][0]);
		            m++;
				}
	        }
	        else if ( a[m][0] < b[n][0] ) {
	        	if ( b[n][0] == 1 ){
		            printf("%dx", b[n][1]);
		            n++;
				}
				else {
		            printf("%dx%d", b[n][1], b[n][0]);
		            n++;
				}
	        }
	        else {
	        	if ( b[n][0] == 1 ) {
		            printf("%dx", b[n][1] + a[m][1]);
		            m++;
		            n++;
				}
				else {
		            printf("%dx%d", b[n][1] + a[m][1], b[n][0]);
		            m++;
		            n++;
				}
	        }
		}
		
        if ( ( m < i ) & ( n < j ) ) {
            printf("+");
        }
    }

    return 0;
}
