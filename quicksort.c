#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int Part(int A[],int l,int h)//数组作为参数时不一定要把数组大小指明
{
    int pi=A[l];
    while (l<h)
    {
        while(l<h&&A[h]>=pi) //快速排序的策略，当两个条件都不满足是退出排序
        --h;//右往左移动
        A[l]=A[h];
        while(l<h&&A[l]<=pi)//快速排序的策略
        ++l;//左往右移动
        A[h]=A[l];
    }
    A[l]=pi; //把枢纽值赋值给最低位，因为是从最低位开始比
    return l;//返回l
}

void Quick(int A[],int l,int h)
{
    if(l<h)
    {
        int p=Part(A,l,h);//进行划分操作
        Quick(A,l,p-1);
        Quick(A,p+1,h);
    }
}

int main()
{
    int A[MAX];//数组的定义，也是声明
    int n;
    printf("Please enter the value of n :\n");
    scanf("%d",&n);
    printf("Please enter the value of array A :\n");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
    Quick(A,1,n);
    for(int j=1;j<=n;j++)
    {
        printf("%d ",A[j]);
    }
    return 0;
}