/*#include<stdio.h>   //����׼���룬�����ͷ�ļ�
#include<stdlib.h>   //��׼��ͷ�ļ�
void move(char get, char put)   //����������һ���޷���ֵ�ĺ���1
{
	printf("%c-->%c\n", get, put);   //��ӡ�������ƶ��ķ���
}
void hanoit(int n, char a, char b, char c)  //����������һ���޷���ֵ�ĺ���2
{
	if (n == 1)   //if�����ж���䣬��������nֵΪ1����ִ����������
	{
		move(a,c);  //�����Զ��庯��1
	}
	else   //��������if�ж�����е���������ִ����������
	{
		hanoit(n-1,a,c,b);  //���õݹ�
			move(a,c);  //�����Զ��庯��1
			hanoit(n-1,b,a,c);  //���õݹ�
	}
}
int main(void)  //���ҽ���һ����������
{
	int m;  //����m���ڴ��������������Ӹ���
	printf("���������Ӹ�����\n");  //��ӡ���������ʾ���
	scanf_s("%d", &m);  //�������Ӹ���
	hanoit(m, 'A', 'B', 'C');  //�����Զ��庯��2
	system("pause");//system()����ϵͳ���pause ��ͣ����
	return 0;  //���������˳�
}*/