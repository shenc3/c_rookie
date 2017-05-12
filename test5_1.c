#include <stdio.h>

void foo() {
	int p;
	printf("%d\n", p);
}

int main() {
	int static k;
	int p;
	int o;
	double d;
	
	printf("%p\n", &k);
	printf("%p\n", &p);
	printf("%p\n", &o);
	printf("%p\n", &d);
	
	return 0;
}
