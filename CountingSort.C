/*Counting sort
By: Ayushman srivastava*/

#include<stdio.h>
int main()
{
	int i, j, n, a[50], k;
	printf("Enter array size followed by its elements from next line:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("  %d",&a[i]);
	}

	/*Counting sort begins*/
	int max = -100;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max = a[i];			
	}
	int c[max+1];
	for(i=0;i<max+1;i++)
	{
		c[i] = 0;
	}
	for(i=0;i<n;i++)
	{
		c[a[i]] ++;
	}
	for(i=1;i<max+1;i++)	
	{
		c[i] += c[i-1];
	}
	//#//
	int solution[n];
	for(i=0;i<n;i++)
	{
		solution[c[a[i]]-1] =  a[i];
		c[a[i]]--;
	}

	//Prints final array//	
	printf("\n..............\n");
	for(i=0;i<n;i++)
	{
		printf("  %d",solution[i]);
	}	
	return 0;
}
