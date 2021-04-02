//#include<stdio.h>
//#include<stdlib.h>
//#define SIZE 100
//int main(void)
//{
//	char a[SIZE];
//	int i = 0 , j = 0;
//	char b[SIZE];
//	printf("请输入字符串：\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf_s("%s", a);
//	}
//	printf("请输入字符：\n");
//	for (j = 0; j < SIZE; j++)
//	{
//		scanf_s("%s", b);
//	}
//	for (i = 0; i < SIZE; i++)
//	{
//		for (j = 0; j < SIZE; j++)
//		{
//			if (a[i] == b[j])
//			{
//				printf("%d", a[i]);
//			}
//			else
//			{
//				return -1;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}           //通过直接的逻辑顺序写的，在某些方面存在尾发现的问题，运行不了！！！



///在一串字符串中查找某字符是否存在，即输入一串字符串，再输入一个字符，查看字符串中是否有该字符，并输出结果
#include <stdio.h>   //“标准输入，输出”头文件
#include <string.h>       //表示包含字符串处理函数的头文件
int main(void)    //有且仅有一个的主函数
{
    char s1[100], s2[10];   //定义两个数组用于输入字符串和字符
    int i, j, k=0, len1, len2;    //定义i,j用于循环语句中控制条件，定义k值代表字符串出现次数，定义len1,len2用于表示字符串的长度，定义b[10]用于后续操作中的过渡变量
    printf("请输入两串字符串\n");
    gets(s1);       //输入字符串
    getchar();
    gets(s2);      //输入字符
    len1 = strlen(s1);   //通过strlen()函数得到字符串的长度len1
    len2 = strlen(s2);   //通过strlen()函数得到字符串的长度len2
    for (i = 0; i < len1; i++)    //for循环第一层，从字符串s1的第一位开始进行对比
    {
        for (j = 0; j < len2; j++)   //for 循环第二层，从字符串s2的第一位开始进行对比,i表示循环次数
        {
            if (s1[i + j] != s2[j])  //if条件判断语句，如果s2[j]的这个字符串与s1在小于strlen（s2）的条件下，如果相等就继续比较下去，直到判断完s2子串，退出第二个for循环为止，如果相等，就执行j==strlen（）的这个循环条件，进行下一轮循环，如果其中有一个字符s2的子串中的字符不相等，就用break退出循环，她的结果就是不进去j==strlen（s2）的这个循环中去，所以k这个计数器就不再增加
                break;   //跳出if 判断语句
        }
        if (j == strlen(s2))   //if条件判断语句，如果j与s2字符串的长度相等，则进行下面语句
        {
            k++;   //k值自增
        }
    }
    if (k == 0)   //if条件判断语句，如果k的值为0时，则进行下面语句
        printf("no\n");  //打印输出说明该在s1字符串中找不到字符串s2
    else  //如果不满足if判断语句中条件，则执行下面语句
            printf("出现了%d次", k);  //输出字符串s2在字符串s1中出现的次数

}
