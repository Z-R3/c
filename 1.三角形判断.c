//输入三个数值，判断其是否能构成一个三角形。如果可以构成一个三角形，计算这个三角形的面积，并判断这个三角形是什么类型的三角形。
/*#include<stdio.h>         //“标准输入，输出”头文件
#include<stdlib.h>          //标准库头文件

int main(void)           //主函数
{
	double a, b, c;        //定义三角形三边长a,b,c
	double s = 0;           //定义三角形面积为s,并赋值为0，便于后面计算

	scanf_s("%lf,%lf,%lf", &a, &b, &c);     //输入三角形三边长a,b,c的值
	if ((a + b) > c &&( b+c)>a && (a+c)>b)  //if条件判断语句，通过三角形三边长中任意两边之和大于第三边来判断输入值a,b,c是否满足该条件
	{
		printf("a, b, c可以构成一个三角形\n");    //在满足if条件语句中条件的情况下，打印输出是否构成三角形的结论
		s = (a + b + c) / 2;        //通过三角形面积计算公式计算出面积
		printf("三角形的面积S=%lf\n", s);   //打印输出三角形面积的大小
		if ((a * a + b * b) == c * c || (b * b + c * c) == a * a || (a * a + c * c) == b * b)
		  //if条件语句判断三角形的类型（是否为直角三角形）
		{
			printf("该三角形是一个直角三角形\n");   //满足条件则输出是直角三角形的结论
		}
		else   //不满足直角三角形条件需进行的内容
		{
			printf("该三角形不是直角三角形\n");   //不满足条件则输出不是直角三角形的结论
		}
		if (a == b&&b == c&&a==c)      //if条件语句判断三角形的类型（是否为等边三角形）
		{
			printf("该三角形是一个等边三角形\n");  //满足条件则输出是等边三角形的结论
		}
		if (a ==b || b == c || a == c)        //if条件语句判断三角形的类型（是否为等腰三角形）
		{


			printf("该三角形是一个等腰三角形\n");     //满足条件则输出是等腰三角形的结论
		}
		else     //不满足等腰三角形条件需进行的内容
		{
			printf("该三角形不是等腰三角形\n");     //不满足条件则输出是等腰三角形的结论
		}


	}

	else   //a,b,c不满足构成一个三角形条件需进行的内容
	{
		printf("a,b,c不能构成一个三角形");  //不满足条件则输出a,b,c不能构成三角形的结论
	}

	system("pause");          //system()是调用系统命令，pause 暂停命令
	return 0;         //程序正常退出
}*/
