#include <stdio.h>
int main()
{
int a,b,c;
char x;//x是标点符号输入
scanf("%d%c%d",&a,&x,&b);
switch(x)
{
case '+':c=a+b;break;
case '-':c=a-b;break;
case '*':c=a*b;break;
case '/':c=a/b;break;
}
printf("answer=%d",c);
    return 0;
} 