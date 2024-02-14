#include<stdio.h>
void main()
{
int num,pos=31,i,j,r=0,m,n,sum=0;
printf("enter the number...\n");
scanf("%d",&num);
printf("binary before reversing...\n");
for(pos=31;pos>=0;pos--)
{
r=num>>pos&1;
printf("%d",r);
}
printf("\n");
printf("binary after reversing...\n");
for(i=0,j=31;i<j;i++,j--)
{
m=num>>i&1;
n=num>>j&1;
	if(m!=n)
	{
	num=num^1<<i;
	num=num^1<<j;
	}
}
for(pos=31,r,sum;pos>=0;pos--)
{
printf("%d",num>>pos&1);
r=num&1<<pos;
sum=sum+r;
}
printf("\n");
printf("after reversing number is \n%d",sum);
printf("\n");
}

