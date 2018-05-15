#include<stdio.h>
void main()
{
char a[20]={NULL};
int i=0;
while((a[i]=getchar())!='\n')
{
if(a[i]>='a'&&a[i]<='z')
a[i]-=32;
else
a[i]+=32;
i++;
}
puts(a);
}
