//#include<stdio.h>   //这个不能运行，下面那个程序可以
//#include<stdlib.h>
//void swap(char* a, char* b);
//void Allarrange(char* str, int k, int len);
//int main(void)
//{
//	char str[10];
//	printf("请输入排列的字符串：\n");
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
//		printf("第%d种排列为：\t%s\n", n++);
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

 //从‘1-5’五个数字的全排列
/*#include<stdio.h>        //“标准输入，输出”头文件    
void Swap(int* a, int x, int y)  //声明并定义一个无返回值的函数，用于交换函数
{          
	int t = a[x];   //定义一个中间变量，用于后面数组中各数字的交换
	a[x] = a[y];  //将数组中的数值赋给另一个
	a[y] = t;   //实现数组中两个数字的位置交换
}
void Perm(int* a, int m, int n)  //声明并定义一个无返回值的函数
{                   //全排列函数
	if (m == n)   //如果m的值与n 的值相等，则执行下面的语句
	{
		for (int i = 0; i < n; i++)  //for循环，查找数组中每一个数字
		{
			printf("%d", a[i]);  //打印输出数组中的数字
		}
		printf("\n");  //输出换行符
	}
	else   //如果不满足if判断语句中条件，则执行下面的语句
	{
		for (int i = m; i < n; i++)    //n次嵌套循环，交换值实现所有可能的情况
		{
			Swap(a, m, i);   //调用自定义函数
			Perm(a, m + 1, n);   //调用自定义函数，递归
			
		}
	}
}
int main()  //有且仅有一个的主函数
{
	int a[10];  //定义一个数组
	int n = 5;   //定义n并赋值为5，表示数组中数字串的长度为5
	for (int i = 0; i < n; i++)  //for循环，查找数组中每一个数字
	{
		a[i] = i + 1;  //对数组进行赋值

	}
	Perm(a, 0, n);  //调用自定义函数，从而输出结果
}*/