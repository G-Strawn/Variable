#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//��ע��0�ǳ�ʼֵ
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	//scanf�����뺯�����ڸ�ʽ��ȷ��ǰ���£����������ֵ��Ϊa��b��ֵ
	sum = a + b;
	printf("sum = ��d\n", sum);//PS�� % �� ��
	//printf����ͽ����ӡ����

	return 0;
}