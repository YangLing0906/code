#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* int Prt(int a)
{
    switch(a)
    {
        case 0:
            printf("Two string is equal\n")；
            break;
        case a<        
    }                  
} */
void Prt(int a)
{
    if(a==0)
    printf("Two string is equal\n");
    else if(a<0)
    printf("The first string longer than the second\n");
    else
    printf("The first string shorter than second\n");
}
int main()
{
    int i;
    char str[]="Hello World!";//定义是可以先不声明字符串大小
    char arr[20];//定义一个字符串数组
    printf("%s\n",str);//一个空的地址
    printf("Please enter string wo compare:\n");
    gets(arr);//gets库函数用来输入需要比较的字符串
    i=strcmp(str,arr);//比较函数 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。
    //printf("%d",i);//打印返回值是否相等
    Prt(i);
    return 0;
}
