#include<stdio.h>
void main()
{
int r,pos=31,i,j,num;
printf("enter the number...\n");
scanf("%d",&num);
printf("binary of %d is\n",num);
for(pos;pos>=0;pos--)
{
r=num>>pos&1;
printf("%d",r);
}
printf("\n");
}
