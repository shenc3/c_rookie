/*
��Ŀ���ݣ�
��ĳ���Ҫ����һ����������Χ��[-100000,100000]��Ȼ���ú���ƴ�������������ÿһλ���������
������1234���������
yi er san si
ע�⣬ÿ���ֵ�ƴ��֮����һ���ո񣬵��������ֺ���û�пո񡣵���������ʱ��������Ŀ�ͷ���ϡ�fu������-2341���Ϊ��
fu er san si yi

�����ʽ:
һ����������Χ��[-100000,100000]��

�����ʽ��
��ʾ���������ÿһλ���ֵĺ���ƴ����ÿһλ���ֵ�ƴ��֮���Կո�ָ���ĩβû�пո�

����������
-30

���������
fu san ling
*/

#include <stdio.h>

int main() {
	int d, n=0;
	scanf("%d", &d);
	int t = 0;
	
	while (d > 0) {
		n++;
		d = d / 10;
	}
	printf("%d", n);
	return 0;
}