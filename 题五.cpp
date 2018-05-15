#include<stdio.h>
int miantiao(int n)
{
if(n==1)
return 2;
else
return miantiao(n-1)*2-1; 
}
void main()
{
int n;
printf("请输入将面条对折几次：");
scanf("%d",&n);
printf("中间切一刀会得到%d面条\n",miantiao(n));
}
