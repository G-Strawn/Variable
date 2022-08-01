#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//请注意0是初始值
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	//scanf是输入函数，在格式正确的前提下，所输入的数值会为a、b赋值
	sum = a + b;
	printf("sum = ％d\n", sum);//PS： % ≠ ％
	//printf将求和结果打印出来

	return 0;
}