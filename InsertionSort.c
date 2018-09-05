/*Insertion sort
By: Ayushman srivastava*/

#include<stdio.h>
void main()
{
	printf("Enter array size followed by its elements from next line:\n");
	int i,j,temp,n,a[50],p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	for(i=1;i<n;i++)
	{
		p = a[i];////
		
		for(j = i-1;j>=0&&a[j]>p;j--)
		{
			a[j+1] = a[j];
		}
		a[j+1]= p;
	}
	
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
}
