//输入两个数值，进行加减乘除四则运算，其中判断是哪一种运算可以通过switch条件开关语句来进行比较选择，输出计算得到的结果。
/*#include<stdio.h>  //“标准输入，输出”头文件
#include<stdlib.h>   //标准库头文件
int main(void)   //有且仅有一个的主函数
{
	int a, b;    //定义a,b来代表要进行计算的两个初始值
	char c;   //定义c表示进行计算时所用符号
	int d = 0;   //没有用到的定义，哈哈哈
	printf("请输入运算符:\n");   //打印输出提示文字语句
	scanf_s("%c", &c);	   //输入c代表的运算符号
	getchar();        //若没有这一步，则c的值会被放在缓存区，而无法得到想要的结果
	printf("请输入需要计算的两个值：\n");    //打印输出提示文字语句
	scanf_s("%d%d", &a, &b);    //输入a,b的值
	switch (c)    //条件开关语句（对输入的c进行比较，得到与之相对应的运算过程和答案）
	{
	case'+':   //如果输入的c为+符号，则进行以下和运算
		printf("%d+%d=%d\n", a, b, a + b);   //对输入的a,b值进行和运算，得到结果
		break;   //退出switch代码块
	case'-':   //如果输入的c为—符号，则进行以下差运算
		printf("%d-%d=%d\n", a, b, a - b);    //对输入的a,b值进行差运算，得到结果
		break;  //退出switch代码块
	case'*':   //如果输入的c为*符号，则进行以下积运算
		printf("%d*%d=%d\n", a, b, a * b);     //对输入的a,b值进行积运算，得到结果
		break;  //退出switch代码块
	case'/':   //如果输入的c为/符号，则进行以下商运算
		printf("%d/%d=%d\n", a, b, a /b);    //对输入的a,b值进行商运算，得到结果
		break;  //退出switch代码块
	default:       //若输入的c的符号均与case语句中的符号不对应则进行以下内容
		printf("输入错误的运算符");  //打印输出结论
		break;  //退出switch代码块
	}

	system("pause");    //system()调用系统命令，pause 暂停命令
	return 0;      //程序正常退出
}*/