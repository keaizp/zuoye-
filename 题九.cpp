#include<stdio.h>
void main()
{
int n,i=0,a[100]={NULL},oushu=0,jishu=0;
scanf("%d",&n);
while(i!=n)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
oushu++;
else
jishu++;
i++;
}
printf("%d %d\n",jishu,oushu);
}
