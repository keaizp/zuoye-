#include<stdio.h>
#include<string.h>
void main()
{
int n,m,i=0;
char a[16]={'\0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char b[100]={NULL};
printf("������һ��ʮ�������֣�");
scanf("%d",&n);
while(n!=0)
{
b[i]=a[n%16];
n=n/16;
i++;
}
m=strlen(b)-1;
printf("ʮ�����ƣ�");
for(i=m;i>=0;i--)
printf("%c",b[i]);
printf("\n");
}
