#include<stdio.h>
void move(int n,char fromPeg,char toPeg,char auxPeg)
{
if(n==1)
printf("move disk 1 from peg %c to peg %c\n",fromPeg,toPeg);
else
{
move(n-1,fromPeg,auxPeg,toPeg);
printf("move disk 1 from peg %c to peg %c\n",fromPeg,toPeg);
move(n-1,auxPeg,toPeg,fromPeg);
}
}
void main()
{
move(10,'A','C','B');
}
