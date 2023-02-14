#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],n,i,element,count=0,flag=0;
	printf("enter the elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d index number:",i);
		scanf("%d",&a[i]);
	}
	printf("enter the elements to be counted for occurance:");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(a[i]==element)
		{
			flag=1;
			count++;
		}
	}
	if(flag==1)
	{
		printf("the given elements %d is found %d times",element,count);
	}
	else
	{
		printf("sorry");
	}
}