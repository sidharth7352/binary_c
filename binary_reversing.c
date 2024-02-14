#include<stdio.h>
void main()
{
int pos=31,num,i,j,r;
printf("enter the number...\n");
scanf("%d",&num);
printf("binary before reversing...\n");
for(pos;pos>=0;pos--)
{
r=num>>pos&1;
printf("%d",r);
}
printf("\n");
printf("binary after reversing...\n");
for(pos=0,r=0;pos<=31;pos++)
{
r=num>>pos&1;
printf("%d",r);
}
printf("\n");
}
