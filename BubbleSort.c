/*Bubble sort
By: Ayushman srivastava*/

#include<stdio.h>
void main()
{
	printf("Enter array size followed by its elements from next line:\n");
	int i,j,temp,n,a[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(a[j]<a[j-1])
				{
					temp = a[j];
					a[j] = a[j-1];
					a[j-1] = temp;
				}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	
}

