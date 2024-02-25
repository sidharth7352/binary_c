#include<stdio.h>
void main()
{
int num,sum=0,mul=1,rev;
printf("enter the number...\n");
scanf("%d",&num);
for(num;num;num=num/10)
{
rev=num%10;
if(rev%2==0)
mul=mul*rev;
else
sum=sum+rev;
}
printf("sum of odd numbers in digit=%d\n",sum);
printf("mul of even numbers in digit=%d\n",mul);
}
