/*#include<stdio.h>   //“标准输入，输出”头文件
#include<stdlib.h>   //标准库头文件
void move(char get, char put)   //声明并定义一个无返回值的函数1
{
	printf("%c-->%c\n", get, put);   //打印出盘子移动的方向
}
void hanoit(int n, char a, char b, char c)  //声明并定义一个无返回值的函数2
{
	if (n == 1)   //if条件判断语句，如果输入的n值为1，则执行下面的语句
	{
		move(a,c);  //调用自定义函数1
	}
	else   //若不满足if判断语句中的条件，则执行下面的语句
	{
		hanoit(n-1,a,c,b);  //运用递归
			move(a,c);  //调用自定义函数1
			hanoit(n-1,b,a,c);  //运用递归
	}
}
int main(void)  //有且仅有一个的主函数
{
	int m;  //定义m用于代表后面输入的盘子个数
	printf("请输入盘子个数：\n");  //打印输出文字提示语句
	scanf_s("%d", &m);  //输入盘子个数
	hanoit(m, 'A', 'B', 'C');  //调用自定义函数2
	system("pause");//system()调用系统命令，pause 暂停命令
	return 0;  //程序正常退出
}*/