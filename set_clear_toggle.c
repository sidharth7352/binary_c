#include<stdio.h>
void main()
{
int num,pos,op,b;
printf("enter the number...\n");
scanf("%d",&num);
printf("enter the bit position..\n");
scanf("%d",&b);
if(pos>=0 && pos<=31)
{
	printf("select an option \n 1) set a bit \n 2) clear a bit \n 3)complement a bit \n");
	scanf("%d",&op);
	printf("binary of %d is \n",num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
	}
	printf("\n");
	if(op==1)
	{
	printf("we want to set the bit position %d \n",b);
	num=num|1<<b;
	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("\n");
	printf("decimal value = %d\n",num);
	}

	if(op==2)
	{
	printf("we want to clear the bit position %d \n",b);
	num=num&~(1<<b);
	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("\n");
	printf("decimal value = %d\n",num);
	}


	if(op==3)
	{
	printf("we want to complement  the bit position %d \n",b);
	num=num^1<<b;
	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("\n");
	printf("decimal value = %d\n",num);
	}
}
}
