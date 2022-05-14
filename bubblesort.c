#include <stdio.h>
#include <stdlib.h>


void Prt(int A[],int n) //打印排序结果的函数
{    
    for(int j=0;j<n;j++) 
    {
        printf(" %d",A[j]);//不加\0,加空格
    }
    printf("\n");
}
void BUbblesort(int A[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++) //需要排序次数
    {
        for(j=n-1;j>i;j--)
        if(A[j-1]>A[j])  //逆序则交换位置
        {
            int temp;
            temp=A[j-1];
            A[j-1]=A[j];
            A[j]=temp;
            
        }
        printf("第%d次排序\n",i+1);//当一次排序介绍时进行打印结果
        Prt(A,n);////当一次排序介绍时进行打印结果
    }

}

int main()
{
     int A[10];//定义一个数组，未初始化
     int n;
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
         scanf("%d",&A[i]);
     }
     BUbblesort(A,n);//调用数组时，写数组名即可，因为A数组地址
    return 0;

}



