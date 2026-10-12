#include<stdio.h>
void main()
{
	int a[50],b[50],c[100],i,j,k,m,n;
	printf("Enter the size of first array:");
	scanf("%d",&m);
	printf("Enter the elements of first array in sorted order:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the size of second array:");
	scanf("%d",&n);
	printf("Enter the elements of second array in sorted order:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;
	j=0;
	k=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<m)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	printf("Megred array is:\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d\n",c[i]);
	}
}
