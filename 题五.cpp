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
printf("�����뽫�������ۼ��Σ�");
scanf("%d",&n);
printf("�м���һ����õ�%d����\n",miantiao(n));
}
