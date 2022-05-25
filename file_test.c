#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("test.txt","w+");//注意这里的权限
    char ch='a';
    int b;
    int x=1;
    fprintf(fp,"%d\n",x);//将1写到文件中
    rewind(fp);//回到fp指针开始的地方
    fscanf(fp,"%d",&b);//从fp指针开始打印1
    printf("%d\n",b);//将读取的b打印到屏幕
    fputc(ch,fp); //将a写到test.txt里面
    fprintf(fp,"\n");//在文件中打印东西与printf实在屏幕中打印
    fprintf(fp,"---------------------\n");
    printf("Had write it");
    fclose(fp);
    //fprintf(fp,"%d\n",x);//将整形变量x写入到文件中，x参数在不需要的时候可以省略
    return 0;
    
}