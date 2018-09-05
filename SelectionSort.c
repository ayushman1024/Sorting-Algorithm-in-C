/*Selection sort
By: Ayushman srivastava*/

#include<stdio.h>
void main()
{
	int i,j,temp,n,a[50],b[50];
	printf("Enter array size followed by its elements from next line:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	int pos,small=0;
	for(i=0;i<n;i++)
	{
		pos = i;small=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[small])
			small = j;
		}
		 temp = a[pos];
		 a[pos] = a[small];
		 a[small] = temp;			
	}
	
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
}
