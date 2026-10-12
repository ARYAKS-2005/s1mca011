#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even numbers are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	printf("Odd numbers are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
