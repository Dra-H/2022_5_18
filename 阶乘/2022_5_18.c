#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int factoria1(int n)
{//����!n�Ľ׳�
	int i = 1;//��������׳�
	int sum = 1;//������
	while (i < n + 1)
	{
		sum *= i;
		i++;
	}
	return sum;
}
int factoria(int n)
{//����!1+!2+!3+....+!n
	int x = 0;//����y�����Ǹ��׳�
	int y = 0;//����׳�
	int ret = 1;//�洢�׳˽��
	int sum = 0;//������
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			ret *= y;
		}
		sum += ret;
		ret = 1;//������Ľ׳�����
	}
	return sum;
}
int main()
{
	int n = 0;
	printf("������==");
	scanf("%d", &n);
	printf("!n == %d\n", factoria1(n));
	printf("!1+!2+!3+...+!n == %d\n", factoria(n));
	return 0;
}