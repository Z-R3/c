//#include<stdio.h>   //����������У������Ǹ��������
//#include<stdlib.h>
//void swap(char* a, char* b);
//void Allarrange(char* str, int k, int len);
//int main(void)
//{
//	char str[10];
//	printf("���������е��ַ�����\n");
//	gets(str);
//	Allarrange(str, 0, strlen(str) - 1);
//	return 0;
//}
//void swap(char* a, char* b)
//{
//	char temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void Allarrange(char* str, int k, int len)
//{
//	int i;
//	if (k == len)
//	{
//	    int n = 1;
//		printf("��%d������Ϊ��\t%s\n", n++);
//	}
//	else
//	{
//		for (i = k; i <= len; i++)
//		{
//			swap(str + i, str + k);
//			Allarrange(str, k + 1, len);
//			swap(str + i, str + k);
//		}
//	}
//}
//

 //�ӡ�1-5��������ֵ�ȫ����
/*#include<stdio.h>        //����׼���룬�����ͷ�ļ�    
void Swap(int* a, int x, int y)  //����������һ���޷���ֵ�ĺ��������ڽ�������
{          
	int t = a[x];   //����һ���м���������ں��������и����ֵĽ���
	a[x] = a[y];  //�������е���ֵ������һ��
	a[y] = t;   //ʵ���������������ֵ�λ�ý���
}
void Perm(int* a, int m, int n)  //����������һ���޷���ֵ�ĺ���
{                   //ȫ���к���
	if (m == n)   //���m��ֵ��n ��ֵ��ȣ���ִ����������
	{
		for (int i = 0; i < n; i++)  //forѭ��������������ÿһ������
		{
			printf("%d", a[i]);  //��ӡ��������е�����
		}
		printf("\n");  //������з�
	}
	else   //���������if�ж��������������ִ����������
	{
		for (int i = m; i < n; i++)    //n��Ƕ��ѭ��������ֵʵ�����п��ܵ����
		{
			Swap(a, m, i);   //�����Զ��庯��
			Perm(a, m + 1, n);   //�����Զ��庯�����ݹ�
			
		}
	}
}
int main()  //���ҽ���һ����������
{
	int a[10];  //����һ������
	int n = 5;   //����n����ֵΪ5����ʾ���������ִ��ĳ���Ϊ5
	for (int i = 0; i < n; i++)  //forѭ��������������ÿһ������
	{
		a[i] = i + 1;  //��������и�ֵ

	}
	Perm(a, 0, n);  //�����Զ��庯�����Ӷ�������
}*/