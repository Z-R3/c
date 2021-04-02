///通过冒泡排序法对一串数字进行排序
/*#include<stdio.h>  //“标准输入，输出”头文件
#include<stdlib.h>   //标准库头文件
#define N 100    //宏定义
int main(void)        //有且仅有一个的主函数
{
	int i, j, temp;   //定义i,j用于后续操作中for循环的条件控制，定义temp作为后面操作中的过渡变量
	int n;  //定义n表示输入数字的个数
	int a[N];   //定义一个数组用于后面输入一串数字
	printf("请输入整数个数：\n");  //打印输出文字提示语句
	scanf_s("%d", &n);  //输入数字的个数n
	printf("请输入整数：\n");   //打印输出文字提示语句
	for (i = 0; i < n; i++)   //for循环，输入一串数字串
	{
		scanf_s("%d", &a[i]);  //输入数字串
	}
	for (i = 1; i < n; i++)   //for循环，用于比较数组中n个数字的大小
	{
		for (j = 0; j < n - i; j++)   //for循环用于进行比较数组中n-i个数字的大小
		{
			if (a[j] > a[j+1])  //if条件判断语句，用于比较大小
			{
				temp = a[j];   //将a[j]的值赋给中间变量temp
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	system("pause");
	return 0;
}*/