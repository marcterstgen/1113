//求最大公因数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a, b;
	printf("请输入两个数:\n");
	scanf("%d %d", &a, &b);
	while (a != b)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	printf("最大公约数为%d。\n", a);
	system("pause");
	return 0;
}