#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int factoria1(int n)
{//计算!n的阶乘
	int i = 1;//用来计算阶乘
	int sum = 1;//保存结果
	while (i < n + 1)
	{
		sum *= i;
		i++;
	}
	return sum;
}
int factoria(int n)
{//计算!1+!2+!3+....+!n
	int x = 0;//告诉y计算那个阶乘
	int y = 0;//计算阶乘
	int ret = 1;//存储阶乘结果
	int sum = 0;//保存结果
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			ret *= y;
		}
		sum += ret;
		ret = 1;//将计算的阶乘重置
	}
	return sum;
}
int main()
{
	int n = 0;
	printf("请输入==");
	scanf("%d", &n);
	printf("!n == %d\n", factoria1(n));
	printf("!1+!2+!3+...+!n == %d\n", factoria(n));
	return 0;
}