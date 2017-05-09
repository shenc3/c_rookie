/*
题目内容：
给定一个n*n矩阵A。矩阵A的鞍点是一个位置（i，j），
在该位置上的元素是第i行上的最大数，第j列上的最小数。
一个矩阵A也可能没有鞍点。
你的任务是找出A的鞍点。

输入格式:
输入的第1行是一个正整数n, （1<=n<=100），然后有n行，
每一行有n个整数，同一行上两个整数之间有一个或多个空格。

输出格式：
对输入的矩阵，如果找到鞍点，就输出其下标。下标为两个数字，
第一个数字是行号，第二个数字是列号，均从0开始计数。
如果找不到，就输出
NO
题目所给的数据保证了不会出现多个鞍点。

输入样例：
4
1 7 4 1 
4 8 3 6 
1 6 1 2 
0 7 8 9

输出样例：
2 1
*/

#include <stdio.h>

#define MAX_INT 2147483647

int main() {
	int n = 1, max = 0, min = 0;
	int i, j, k, j1, i2;
	int saddle = 0;
	scanf("%d", &n);
	
	int a[100][100];
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
		
	}
	
	// 遍历数组
	/* 
	for ( i = 0; i < n; i++ ) {
		for ( j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	*/

	for ( i = 0; i < n; i++) {
		max = 0;
		for ( j = 0; j < n; j++) {
			if ( max < a[i][j] ) {
				max = a[i][j];
				j1 = j;
			}
		}
		
		min = MAX_INT;
		for ( k = 0; k < n; k++) {
			if ( min > a[k][j1] ) {
				min = a[k][j1];
				i2 = k;
			}
		}
		
		if ( a[i][j1] == a[i2][j1]) {
			saddle = 1;
			printf("%d %d", i2, j1);
		}
	}
	
	if (!saddle) printf("NO");
	
	return 0;
}


