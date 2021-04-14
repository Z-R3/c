/*#include <stdio.h>   //“标准输入，输出”头文件
#include <stdlib.h>   //标准库头文件
#define INFINITY 255   //宏定义，表示图中两个顶点无关联
typedef struct {
    int vertexNum;    //定义vertexNum表示图的顶点数
    int arcNum;       //定义arcNum表示图的边数
    int* arc;         //定义一个指针指向图中顶点的关联关系数组
    int* color;       //定义一个指针指向各顶点着色情况数组
}Graph;
void creatGraph(Graph* g);   //声明一个无返回值的函数
int ColorGraph(Graph* g);  //声明 一个有返回值的函数
int Conflict(Graph* g, int k);    //声明一个有返回值的函数
void dispVertexColor(Graph* g);   //声明一个有返回值的函数
int main()  //有且仅有一个的主函数
{
    Graph g;   //声明一个Graph类型的图g
    creatGraph(&g);  //给图g定义顶点数、边数、生成顶点之间的关联关系
    int m = ColorGraph(&g);  //调用自定义函数
    printf("%d", m);   //打印输出结果
    dispVertexColor(&g);   //调用自定义函数
    return 0;  //程序正常退出
}
 ///
 /// 以下creatGraph()函数
 /// 定义图的定点数、边数、
 ///图的邻接矩阵、顶点着色记录数组
 ///
void creatGraph(Graph* g)  //对自定义函数的定义
{
    int x, y, k, w;  //定义几个变量，用于后面条件循环语句中控制变量
    scanf_s("%d %d", &g->vertexNum, &g->arcNum);   //输入变化位置
    g->arc = (int*)malloc(sizeof(int) * g->vertexNum * g->vertexNum); //创建邻接矩阵
    g->color = (int*)malloc(sizeof(int) * g->vertexNum);  //创建顶点着色记录数组
    if (g->vertexNum == 1 && g->arcNum == 0)  //if条件判断语句，如果满足条件则执行下面的语句
    {
        g->arc[0] = 0;  //赋值
        g->color[0] = 1;  //赋值
        return;  //退出该判断语句
    }
    for (x = 0; x < g->vertexNum; x++) {  //初始化邻接矩阵中的元素为INFINITY，即顶点之间不连通
        for (y = 0; y < g->vertexNum; y++)  //for循环
            g->arc[g->vertexNum * x + y] = INFINITY;
        g->color[x] = 0;  //初始化着色记录数组元素为0，即无色。
    }
    for (k = 0; k < g->arcNum; k++) { //关联矩阵为一个对称矩阵
        scanf_s("%d %d %d", &x, &y, &w);  //输入x,y,w的值
        g->arc[g->vertexNum * x + y] = w; //将关联边长度存入图的矩阵x行y列
        g->arc[g->vertexNum * y + x] = w; //将关联边长度存入图的矩阵y行x列
    }
}
void dispVertexColor(Graph* g)       //输出图g中各顶点的着色情况函数
{
    printf("[");  //打印出符号“[”
    for (int i = 0; i < g->vertexNum - 1; i++)  //for循环
        printf("%d,", g->color[i]);  //打印出着色的小球
    printf("%d]n", g->color[g->vertexNum - 1]);  
}

int ColorGraph(Graph* g)   //给图的顶点着色，函数返回值为最小着色数的值。
{
    int k = 0, m = 1;  //定义k,m用于后面语句中进行条件判断或循环
    if (g->vertexNum == 1 && g->arcNum == 0)  //如果满足if条件语句的条件，则执行下面的语句
    {
        g->color[0] = 1; //赋值
        return m;  //返回m的值
    }
    while (1)  //循环语句，如果为真，则执行下面的语句
    {
        while (k >= 0)  //循环语句，如果k的值不小于0，则执行下面的语句
        {
            g->color[k] = g->color[k] + 1;  //自增
            while (g->color[k] <= m)  //循环语句
            {
                if (Conflict(g, k)) break;  //if条件判断语句，若满足条件则跳出循环
                else g->color[k] = g->color[k] + 1;  //若不满足条件，则自增
            }
            if (g->color[k] <= m && k == g->vertexNum - 1)
                {return m;}
            if (g->color[k] <= m && k < g->vertexNum - 1)
                {k = k + 1;}
            else
               { g->color[k--] = 0;}
        }
        k = 0; //赋值，令m等于0
        m++;  //m自增
    }
}
int Conflict(Graph* g, int k)   //检测顶点k与其邻接点着色是否冲突检，返回1为不冲突，返回0为冲突，此函数由ColorGraph()函数调用
{
    for (int i = 0; i < k; i++)  //foe循环
    {
        if (g->arc[g->vertexNum * k + i] != 255 && g->color[i] == g->color[k])  //if条件判断语句
            return 0;   //跳出if语句
    }
    return 1;  //返回值为1
}*/
