///输入一个数字串，用选择排序法将其按从小到大的顺序输出
/*#include<stdio.h>  //“标准输入，输出”头文件
#include<stdlib.h>  //标准库头文件
#define N 100  //宏定义
int main(void)  //有且仅有一个的主函数
{
	int a[N];  //定义一个数组，用于输入数字串
	int n;  //定义n表示数字串的长度
	int i,j;  //定义i,j用于循环中控制变量
	int temp, min;  //定义temp,min用于后面替换值时作为中间变量
	printf("请输入有多少个数字：\n");  //打印输出文字提示语句
	scanf_s("%d", &n);  //输入数字串
	printf("请输入一串数字：\n");  //打印输出文字提示语句
	for (i = 0; i < n; i++)  //for循环，用于输入数字串
	{
		scanf_s("%d", &a[i]);  //输入数字串
	}
	for (i = 0; i < n; i++)  //for循环，用于数字串中数字交换顺序
	{
		min = i;  //将n的值赋给min
		for (j = 0; j < n; j++)
		{
			if (a[min] > a[j])              //如果有一个值比前面的值小
			{
				min = j;        //将最小的值j的序号给min
			}

		}
		temp = a[min];     //交换最最小值
		a[min] = a[i];    //将最小值赋给a[min]
		a[i] = temp;  //交换数组中两个数值的顺序
	}
	for (i = 0; i < n; i++)  //for 循环用于输出进行排序后的数字串
	{
		printf("%d\t", a[i]); //输出数字串
	}
	
}*/