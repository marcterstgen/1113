//���������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a, b;
	printf("������������:\n");
	scanf("%d %d", &a, &b);
	while (a != b)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	printf("���Լ��Ϊ%d��\n", a);
	system("pause");
	return 0;
}