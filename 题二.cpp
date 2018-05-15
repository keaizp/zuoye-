#include<stdio.h>
void main()
{
char a[100];
int i=0,xch=0,dch=0,digit=0;
while((a[i]=getchar())!='\n')
{
if(a[i]>='a'&&a[i]<='z')
xch++;
if(a[i]>='A'&&a[i]<='Z')
dch++;
if(a[i]>='0'&&a[i]<='9')
digit++;
i++;
}
printf("´óÐ´×ÖÄ¸£º%d\nÐ¡Ð´×ÖÄ¸£º%d\nÊý×Ö£º%d\n",dch,xch,digit);
}
