#include <stdio.h>

#define M 101 
#define N 2

int main() {
    int a[M] = {0};
    int pow, factor, count = N;
	int i, nonzero = 1, max = 0;
	
    scanf("%d %d", &pow, &factor);
    a[pow] = factor;

    while ( count > 0) {
        scanf("%d %d", &pow, &factor);
        if ( factor == 0)
			continue;
		
		if ( a[pow] == 0) {
			nonzero++;	
		}
		
		if ( max < pow ) {
			max = pow;
		}
		
		a[pow] = a[pow] + factor;

		if ( pow == 0)
			count--;
    }

	// printf("Nonzero in a = %d\n", nonzero);
	
	for (i = max; i >= 0; i--){
		if ( a[i] > 0 ) {
			if ( i == 0) {
				printf("%d", a[i]);
				nonzero--;
			}
			else if ( i == 1) {
				printf("%dx", a[i]);
				nonzero--;
			}
			else {
				printf("%dx%d", a[i], i);
				nonzero--;	
			}

			if ( nonzero > 0 )
			    printf("+");
		}
	}

    return 0;
}
