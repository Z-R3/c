///约瑟夫杀人环，据说著名犹太历史学家Josephus有过以下的故事：在罗马人占领乔塔帕特后，39 个犹太人与Josephus及他的朋友躲到一个洞中，39个犹太人决定宁愿死也不要被敌人抓到，于是决定了一个自杀方式，
/// 41个人排成一个圆圈，由第1个人开始报数，每报数到第3人该人就必须自杀，然后再由下一个重新报数，直到所有人都自杀身亡为止。
/// 然而Josephus 和他的朋友并不想遵从。首先从一个人开始，越过k-2个人（因为第一个人已经被越过），并杀掉第k个人。接着，再越过k-1个人，并杀掉第k个人。
/// 这个过程沿着圆圈一直进行，直到最终只剩下一个人留下，这个人就可以继续活着。问题是，给定了和，一开始要站在什么地方才能避免被处决？
/// Josephus要他的朋友先假装遵从，他将朋友与自己安排在第16个与第31个位置，于是逃过了这场死亡游戏。

/*#include<stdio.h>   //头文件     //////参照书上的，但是不能运行，下面那个代码块可以运行
#include<string.h>   //头文件
#include<conio.h>    //conio.h库文件定义了通过控制台进行数据输入和数据输出的函数，主要是一些用户通过按键盘产生的对应操作
#define N 5         //宏定义
#define LEN 10       //宏定义
void JosephProblem(char[][LEN], int);   //声明一个函数来运用递归
int main(void)         //主函数
{
	char name[N][LEN];   //定义一个数字来输入参加该游戏的人名
	int i, k;      //定义变量i用于循环条件控制，定义k来输入第几个人退出的数字顺序
	printf("请依次输入%d个人名（每个人名不超出10个字符）：\n");  //打印输出人名
	for (i = 0; i < N; i++)    //循环
	{
		scanf_s("%s", name[i]);   //输入人名

	}
	printf("\n请输入人数到第几个人退出：");   //打印输出文字提示
	scanf_s("%d", &k);   //输入数字，赋予k值
	JosephProblem(name, k);   
	puts("Press any key to exit...");
	getch();

}
void JosephProblem(char ary[][LEN], int k)
{
	int out = 0;
	int counter = 0;
	int idx = -1;
	while (out < N)
	{
		idx++;
		if (idx == N)
		{
			idx = 0;
		}
		if (strcmp(ary[idx], "\0") == 0)
		{
			continue;
		}
		else
		{
			counter++;

			if (counter == k)
			{
				out++;
				printf("第%2d个退出者：%s\n", out, ary[idx]);
				strcpy(ary[idx], "\0");
				counter = 0;
			}
		}          
	}
}*/


/*#include<stdio.h>   //“标准输入，输出”头文件
#include<stdlib.h>   //标准库头文件
#include<string.h>   //包含字符串处理的函数的头文件
int Quarrel(int n, int m);   //声明一个有返回值的函数
int Quarrel(int n, int m)   //定义一个有返回值的函数
{
	int tmp = 0;  //定义一个变量，用于后续语句中自增并判断数字顺序
	int count = n;  //定义count，并将n的值赋给它
	int i = 0;   //定义i用于后面循环中控制变量
	int* arr = (int*)malloc(sizeof(int) * n);   //定义一个指针并使用malloc函数
	for (i = 0; i < n; i++)  //for 循环，对数组进行赋值
	{
		arr[i] = 1;  //数组不为空
	}
	i = 1;
	while (count > 1)  //while循环，当count大于1时，执行下面的语句
	{
		if (arr[i] != 0)  //if条件判断语句，当数组中每一个数不为空时，执行下面的语句
		{
			tmp++;  //tmp自增，用于计数
			if (tmp == m)  //if条件判断语句，如果tmp的值与m的值相等，则执行下面语句
			{
				count--;   //count自减，用于计数
				arr[i] = 0;  //令数组为空
				tmp = 0;  //令tmp等于0
			}
		}
		i = (i + 1) % n;  //对i值进行变换
	}
	for (i = 0; i < n; i++)  //for循环，用于后面对数组中每一个数进行判断
	{
		if (arr[i] != 0)  //if条件判断语句，如果数组不为空，则执行下面的语句
		{
			printf("赢家是第：%d个人\n", i + 1);  //打印输出结果
		}
	}
	free(arr);  //释放malloc函数占用的空间
	return i + 1;  //返回值为i+1
}
int main(void)  //有且仅有一个的主函数
{
	Quarrel(15, 4);  //调用自定义函数
	Quarrel(4, 3);   //调用自定义函数
	Quarrel(2, 3);    //调用自定义函数
	return 0;   //程序正常退出



}*/
