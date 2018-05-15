#include<stdio.h>
void Delete(char *a,int n)
{
int i;
for(i=n;i<20;i++)
if(i==19)a[i]='\0';
else
a[i]=a[i+1];
}
void main()
{
char str1[20]={NULL},ch1;
int i=0;
while((str1[i]=getchar())!='\n')
{
i++;
}
scanf("%c",&ch1);
for(i=0;i<20;i++)
if(str1[i]==ch1)Delete(str1,i);
puts(str1);
}
