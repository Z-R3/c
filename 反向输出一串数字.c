///输入一串数字，将其反向输出
/*#include<stdio.h>  //“标准输入，输出”头文件
#include<stdlib.h>  //标准库头文件
#define N 100  //宏定义
int main(void)  //有且仅有一个的主函数
{
	int a[N];  //定义一个数组，用于输入数字串
	int n;  //定义n用于后面表示输入数字的个数，即数组的长度
	int i ;  //定义i用于后面循环中用于条件控制
	printf("请输入数字个数：\n"); //打印输出文字提示语句
	scanf_s("%d", &n);  //输入n的值
	printf("请输入数字串：\n");  //打印输出文字提示语句
	for (i = 0; i < n; i++)  //for循环，输入数字串
	{
		scanf_s("%d", &a[i]);  //输入数组中各数字
	}
	for (i = n-1; i >=0; i--)  //for循环，查找数组中各数字，将各数字进行反向查找
	{
		printf("%d\t", a[i]);  //打印输出反向数字串
	}
	system("pause");  //system()调用系统命令，pause 暂停命令
	return 0;  //程序正常退出
}*/