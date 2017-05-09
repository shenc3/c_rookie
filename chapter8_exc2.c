#include <stdio.h>

int main() {
	int n, i, digit;
	int a[10] = {0};
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while ( n > 0 ) {
		digit = n % 10;
		a[digit] += 1;
		n = n / 10;
	}
	
	printf("Digit:        ");
	for ( i = 0; i < 10; i++) {
		printf("%2d", i);
	}
	
	printf("\nOccurences:   ");
	for ( i = 0; i < 10; i++) {
		printf("%2d", a[i]);
	}
	
	return 0;
}
