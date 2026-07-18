#include <stdio.h>

int main(){
    printf("请输入正整数:");
    int n;
    scanf("%d",&n);
    int i=1;
    int factor=1;
    while (i<=n)
    {
        factor*=i;
        i++;


    }
    printf("阶乘为%d\n",factor);
    return 0;

    
}