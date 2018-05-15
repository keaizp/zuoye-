#include<stdio.h>
void main()
{
int a[3][2],b[2][3],i,j;
for(i=0;i<3;i++)
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
for(i=0;i<2;i++)
for(j=0;j<3;j++)
b[i][j]=a[j][i];
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
printf("%d ",b[i][j]);
printf("\n");
}
}
