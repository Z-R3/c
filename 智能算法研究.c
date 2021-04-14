/*#include <stdio.h>   //����׼���룬�����ͷ�ļ�
#include <stdlib.h>   //��׼��ͷ�ļ�
#define INFINITY 255   //�궨�壬��ʾͼ�����������޹���
typedef struct {
    int vertexNum;    //����vertexNum��ʾͼ�Ķ�����
    int arcNum;       //����arcNum��ʾͼ�ı���
    int* arc;         //����һ��ָ��ָ��ͼ�ж���Ĺ�����ϵ����
    int* color;       //����һ��ָ��ָ���������ɫ�������
}Graph;
void creatGraph(Graph* g);   //����һ���޷���ֵ�ĺ���
int ColorGraph(Graph* g);  //���� һ���з���ֵ�ĺ���
int Conflict(Graph* g, int k);    //����һ���з���ֵ�ĺ���
void dispVertexColor(Graph* g);   //����һ���з���ֵ�ĺ���
int main()  //���ҽ���һ����������
{
    Graph g;   //����һ��Graph���͵�ͼg
    creatGraph(&g);  //��ͼg���嶥���������������ɶ���֮��Ĺ�����ϵ
    int m = ColorGraph(&g);  //�����Զ��庯��
    printf("%d", m);   //��ӡ������
    dispVertexColor(&g);   //�����Զ��庯��
    return 0;  //���������˳�
}
 ///
 /// ����creatGraph()����
 /// ����ͼ�Ķ�������������
 ///ͼ���ڽӾ��󡢶�����ɫ��¼����
 ///
void creatGraph(Graph* g)  //���Զ��庯���Ķ���
{
    int x, y, k, w;  //���弸�����������ں�������ѭ������п��Ʊ���
    scanf_s("%d %d", &g->vertexNum, &g->arcNum);   //����仯λ��
    g->arc = (int*)malloc(sizeof(int) * g->vertexNum * g->vertexNum); //�����ڽӾ���
    g->color = (int*)malloc(sizeof(int) * g->vertexNum);  //����������ɫ��¼����
    if (g->vertexNum == 1 && g->arcNum == 0)  //if�����ж���䣬�������������ִ����������
    {
        g->arc[0] = 0;  //��ֵ
        g->color[0] = 1;  //��ֵ
        return;  //�˳����ж����
    }
    for (x = 0; x < g->vertexNum; x++) {  //��ʼ���ڽӾ����е�Ԫ��ΪINFINITY��������֮�䲻��ͨ
        for (y = 0; y < g->vertexNum; y++)  //forѭ��
            g->arc[g->vertexNum * x + y] = INFINITY;
        g->color[x] = 0;  //��ʼ����ɫ��¼����Ԫ��Ϊ0������ɫ��
    }
    for (k = 0; k < g->arcNum; k++) { //��������Ϊһ���Գƾ���
        scanf_s("%d %d %d", &x, &y, &w);  //����x,y,w��ֵ
        g->arc[g->vertexNum * x + y] = w; //�������߳��ȴ���ͼ�ľ���x��y��
        g->arc[g->vertexNum * y + x] = w; //�������߳��ȴ���ͼ�ľ���y��x��
    }
}
void dispVertexColor(Graph* g)       //���ͼg�и��������ɫ�������
{
    printf("[");  //��ӡ�����š�[��
    for (int i = 0; i < g->vertexNum - 1; i++)  //forѭ��
        printf("%d,", g->color[i]);  //��ӡ����ɫ��С��
    printf("%d]n", g->color[g->vertexNum - 1]);  
}

int ColorGraph(Graph* g)   //��ͼ�Ķ�����ɫ����������ֵΪ��С��ɫ����ֵ��
{
    int k = 0, m = 1;  //����k,m���ں�������н��������жϻ�ѭ��
    if (g->vertexNum == 1 && g->arcNum == 0)  //�������if����������������ִ����������
    {
        g->color[0] = 1; //��ֵ
        return m;  //����m��ֵ
    }
    while (1)  //ѭ����䣬���Ϊ�棬��ִ����������
    {
        while (k >= 0)  //ѭ����䣬���k��ֵ��С��0����ִ����������
        {
            g->color[k] = g->color[k] + 1;  //����
            while (g->color[k] <= m)  //ѭ�����
            {
                if (Conflict(g, k)) break;  //if�����ж���䣬����������������ѭ��
                else g->color[k] = g->color[k] + 1;  //��������������������
            }
            if (g->color[k] <= m && k == g->vertexNum - 1)
                {return m;}
            if (g->color[k] <= m && k < g->vertexNum - 1)
                {k = k + 1;}
            else
               { g->color[k--] = 0;}
        }
        k = 0; //��ֵ����m����0
        m++;  //m����
    }
}
int Conflict(Graph* g, int k)   //��ⶥ��k�����ڽӵ���ɫ�Ƿ��ͻ�죬����1Ϊ����ͻ������0Ϊ��ͻ���˺�����ColorGraph()��������
{
    for (int i = 0; i < k; i++)  //foeѭ��
    {
        if (g->arc[g->vertexNum * k + i] != 255 && g->color[i] == g->color[k])  //if�����ж����
            return 0;   //����if���
    }
    return 1;  //����ֵΪ1
}*/
