///运用数学中的阶乘，输入一个数，计算其进行阶乘后的结果
/*#include<stdio.h>   //“标准输入，输出”头文件
#include<stdlib.h>   //标准库头文件
int fun(int);   //声明一个有返回值的函数
int main(void)//有且仅有一个的主函数
{
	int n;   //定义n用于后面输入一个数字
	printf("请输入求阶乘的数：\n");  //打印输出文字提示语句
	scanf_s("%d", &n);   //输入一个数字
	printf("%d!=%d", n, fun(x));  //输出进行计算后的结果，并在输出结果的过程中调用自定义函数
	system("pause");  //system()调用系统命令，pause 暂停命令
	return 0;  //程序正常退出
}
int fun(int x)  //函数定义
{
	if (n == 0 || n == 1)  //if条件判断语句，当n等于0或1时，执行以下语句
	{
		return 1;  //满足if判断语句中的条件，返回值为1，是因为0和1的阶乘结果都为1
	}
	else //不满足if判断语句中的条件则执行以下语句
	{
		return n * fun(n - 1);  //如果输入的数不是0或1，则运用递归计算出阶乘的结果
	}
}*/