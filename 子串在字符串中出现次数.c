/*#include <stdio.h>      //����׼���룬�����ͷ�ļ�

#include <string.h>  //����math������ͷ�ļ�

int get_count(char*, char*);   //����һ���з���ֵ�ĺ���

int main()   //���ҽ���һ����������
{
    char str1[10] = "aaaacaaa";   //����һ�����飬���������ַ���
    char str2[10] = "aa";  //����һ�����飬�����������ַ���
    int count;  //����count���ں�������������ַ������ַ����г��ֵĴ���


    count = get_count(str1, str2);  //�����Զ��庯��
    printf("count is %d\n", count); //����õ��Ľ��

}

int get_count(char* src, char* dst)  //���Զ��庯�����ж���
{
    int i = 0, j = 0;  //�������i,j����ֵΪ0 �����ں���ѭ������п��Ʊ���
    int num0 = 0, num1 = 0;  //���������������ڼ���
    int len = (int)strlen(dst);   //��dst���ͽ���ǿ��ת����ת��Ϊint����
    while (src[i] != '\0')  //whileѭ����䣬������src���ַ���δ����ʱһֱ����ѭ��
    {
        while ((dst[j] != 0) && (dst[j] == src[i + j]))//�������dst[j]!=0��Ϊ��Ӧ������Ϊabab�Ӵ�Ϊab�������Ҳ���ǱȽ���ɺ������ַ���������ĩβ�����
        {
            j++;   //j��������
        }
        if (dst[j] == 0)  //if�����ж���䣬���dst���������ַ�Ϊ0
        {
            i += len;  //iֵ��Ϊi+len
            j = 0;  //jֵ��Ϊ0
            num0++;   //num0����
            if (src[i] == '\0')//���������Ϊ��Ӧ������Ϊabab�Ӵ�Ϊab�������Ҳ���ǱȽ���ɺ������ַ���������ĩβ�����
            {
                if (num0 > num1)  //if�����ж���䣬���num0>num1,��ִ����������
                    num1 = num0;  //��num0��ֵ����num1
            }
        }
        else  //����������if����������ģ�ִ����������
        {
            if (num0 > num1)//���num0>num1,��ִ����������
            {
                num1 = num0;  //��num0��ֵ����num1
            }
            num0 = 0;  //��num0��ֵΪ0 
            i++;  //i����ֵ����
            j = 0;  //��jֵΪ0 
        }
    }
    return num1;  //����num1��ֵ
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
//    char* p;//�ַ�������ָ��
//    char* q;//�ַ�������ָ��
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


