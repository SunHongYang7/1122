#include <stdio.h>
int main()
{
int a,b,answer ;
char x,y;//x是运算符号输入
scanf("%d%c",&a,&x);
while(x!='=')
    {
        scanf("%d%c",&b,&y);
        switch(x)
        {
        case '+':answer=a+b;break;
        case '-':answer=a-b;break;
        case '*':answer=a*b;break;
        case '/':answer=a/b;break;
        }
    a=answer;
    x=y;
    }
    printf("answer=%d",answer);
    return 0;
} 
//可执行单次的加减乘除，不要输“=”