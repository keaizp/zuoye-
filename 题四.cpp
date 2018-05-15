#include<stdio.h>
void main()
{
int i,m;
for(i=100;i<=1000000;i++)
{
m=i*i;
if(i==m%1000)
printf("%d,%d\n",i,m);
}
}
