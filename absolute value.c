#include<stdio.h>
int main()
{
	int i,n,j,sum;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=1;i<n-1,j<n;i++,j++)
	{
	
		
			sum+=abs(a[i]-a[j]);
		
	}
	printf("%d",sum);
}