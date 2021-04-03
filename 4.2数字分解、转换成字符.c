//#include<stdio.h>
//int main(void)
//{
//	int a, b, c, d, e, f;
//	long x;
//	printf("请输入一个不超过五位的数字：\n");
//	scanf_s("%ld", &x);
//	e = x % 10;
//	d = x / 10 % 10;
//	c = x / 100 % 10;
//	b = x / 1000 % 10;
//	a = x / 10000 % 10;
//
//}





///输入一串数字串，将数字串分解成一个个的数字，并将这些数字一个个地按照字符的形式输出
/*#include<stdio.h>  //“标准输入，输出”头文件
#include<assert.h>   //提供一个assert的宏定义
#include<string.h>   //包含字符串处理函数的头文件

//123====>“1 2 3”  将数字转化为字符串
char* my_itoa(char* str, int num)  //局部变量，出了作用域释放
{
	int i = 0;  //定义i用于后面数组中循环变量
	while (num != 0)  //while循环
	{
		str[i] = num % 10 + '0';//得到字符串“3 2 1”
		num = num / 10;    //num == 0
		i++;      //，对i自增，i == 3
	}
	str[i] = '\0';    //str[3]
	i--;   //对i 自减
	for (int j = 0; j < i; j++, i--)  //for循环，对数组中值进行调换
	{
		char ch = str[j];    //0号下标的元素赋给ch   
		str[j] = str[i];    //2号下标的元素赋给0号下标==》str【】==121
		str[i] = ch;     //把3赋给2号下标
	}
	return str;   //返回str的值
}
int main()  //有且仅有一个的主函数
{
	char str[5] = "";  //定义一个数组
	int num = 123;   
	printf("%s\n", my_itoa(str, num));   //打印字符串
	getchar();  //输入回车键过后结束程序
	return 0;   //程序正常退出
}*/
