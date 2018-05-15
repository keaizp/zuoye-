#include<stdio.h>
void main()
{
int a[20],i,j,cge,k,t,num,len=0;
getchar();
while(1)
{
scanf("%d",&a[len++]);
if((getchar())==']')break;
}
printf("k=");
scanf("%d",&k);
for(i=0;i<k;i++)
{
num=a[i];
for(j=i+1;j<len;j++)
{
if(num<a[j])
{
num=a[j];
t=j;
}
}
cge=a[i];
a[i]=a[t];
a[t]=cge;

}
printf("%d\n",a[k-1]);
}