#include<stdio.h>
void main()
{
int n,k,i,count=0;
printf("n=");
scanf("%d",&n);
printf("k=");
scanf("%d",&k);
for(i=0;i<=n;i++)
{
if(i%10==k)count++;
if(i/10==k)count++;
}
printf("%d\n",count);
}
