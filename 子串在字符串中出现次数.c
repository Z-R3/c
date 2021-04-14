/*#include <stdio.h>      //“标准输入，输出”头文件

#include <string.h>  //包含math函数的头文件

int get_count(char*, char*);   //声明一个有返回值的函数

int main()   //有且仅有一个的主函数
{
    char str1[10] = "aaaacaaa";   //定义一个数组，用于输入字符串
    char str2[10] = "aa";  //定义一个数组，用于输入子字符串
    int count;  //定义count用于后面计数，即子字符串在字符串中出现的次数


    count = get_count(str1, str2);  //调用自定义函数
    printf("count is %d\n", count); //输出得到的结果

}

int get_count(char* src, char* dst)  //对自定义函数进行定义
{
    int i = 0, j = 0;  //定义变量i,j并赋值为0 ，用于后面循环语句中控制变量
    int num0 = 0, num1 = 0;  //定义两个变量用于计数
    int len = (int)strlen(dst);   //对dst类型进行强制转换，转换为int类型
    while (src[i] != '\0')  //while循环语句，当数组src中字符串未结束时一直进行循环
    {
        while ((dst[j] != 0) && (dst[j] == src[i + j]))//这里加上dst[j]!=0是为了应对主串为abab子串为ab的情况，也就是比较完成后两个字符串都到达末尾的情况
        {
            j++;   //j变量自增
        }
        if (dst[j] == 0)  //if条件判断语句，如果dst数组中首字符为0
        {
            i += len;  //i值变为i+len
            j = 0;  //j值变为0
            num0++;   //num0自增
            if (src[i] == '\0')//这种情况是为了应对主串为abab子串为ab的情况，也就是比较完成后两个字符串都到达末尾的情况
            {
                if (num0 > num1)  //if条件判断语句，如果num0>num1,则执行下面的语句
                    num1 = num0;  //将num0的值赋给num1
            }
        }
        else  //不满足上面if语句中条件的，执行下面的语句
        {
            if (num0 > num1)//如果num0>num1,则执行下面的语句
            {
                num1 = num0;  //将num0的值赋给num1
            }
            num0 = 0;  //令num0在值为0 
            i++;  //i变量值自增
            j = 0;  //令j值为0 
        }
    }
    return num1;  //返回num1的值
}*/




//#include<stdio.h>
//#include<stdlib.h>
//int numOfstr(char* Mstr, char* substr);
//int main(void)
//{
//    printf("%d", numOfstr());
//    
//}
//int numOfstr(char* Mstr, char* substr)
//    {
//    int number = 0;
//
//    char* p;//字符串辅助指针
//    char* q;//字符串辅助指针
//
//    while (*Mstr != '\0')
//    {
//        p = Mstr;
//        q = substr;
//
//        while ((*p == *q) && (*p != '\0') && (*q != '\0'))
//        {
//            p++;
//            q++;
//        }
//        if (*q == '\0')
//        {
//            number++;
//        }
//        Mstr++;
//    }
//    return number;
//}


