# include <stdio.h>
# include <math.h>

int main() {
	int num, d;
	int unit = 1, result = 0;
	scanf("%d", &num);
	while ( num > 0) {
		d = num % 10;
		result += !((d % 2 == 0) ^ (unit % 2 == 0)) * pow(2, unit-1);
		num = num / 10;
		unit ++;
	}
	
	printf("%d", result);
	
	return 0;
}
