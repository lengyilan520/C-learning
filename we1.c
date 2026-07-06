#include <stdio.h>

int main(){

    printf("请输入两个整数：");
    int a;
    int b;
    scanf("%d %d",&a,&b);
    double c=(a+b)/2.0;
    printf("平均数为%f.\n",c);
    return 0;
}