#include <stdio.h>

void print_row(void) {
	int i;
	for ( i = 1; i <= 10; i++)
	  printf("*");
}

void print_matrix(void) {
	int i;
	for ( i = 1; i <= 10; i++) {
		print_row();
		printf("\n");
	}
}

int main() {
	print_matrix();
	return 0;
}
