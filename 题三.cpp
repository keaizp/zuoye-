#include<stdio.h>
#include<string.h>
void main()
{
char str1[]={"I Love GPLT"};
int i=0,m;
m=strlen(str1);
for(i=0;i<m;i++)
{
printf("    ");
putchar(str1[i]);
putchar('\n');
}
}
