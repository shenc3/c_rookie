/*
题目内容：
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，
包括第n个素数和第m个素数。

输入格式:
两个整数，第一个表示n，第二个表示m。

输出格式:
一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。

输入样例：
2 4

输出样例：
15
*/

#include <stdio.h>

int main() {
	int d = 2, cnt = 1, s = 0;
	
	int i, n, m, isPrime;
	scanf("%d %d", &n, &m);
	while (cnt <= m) {
		isPrime = 1;
		for ( i=2; i < d/2+1; i++) {
			if (d % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			if (cnt >= n & cnt <= m) {
				s += d;
			}
			cnt++;
		}
		d++;
	}
	
	printf("%d", s);
	
	return 0;
}
