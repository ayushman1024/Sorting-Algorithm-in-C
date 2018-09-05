/*Quick sort
By: Ayushman srivastava*/

#include<stdio.h>
int partition(int[],int,int);
void qsort(int[],int,int);
int main()
{
	int i,j,n,a[50];
	printf("Array Size: ");
	scanf("%d",&n);
	printf("\nEnter Array Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,0,n-1);	
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	return 0;	
}

int partition(int a[],int p,int r)
{
	int i,j,k,temp=0;
	i= p-1;
	for(j=p;j<r;j++)
	{
		if(a[j]<=a[r])
		{
			i++;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	temp = a[i+1];
	a[i+1] = a[r];
	a[r] = temp;
	k=i+1;
	return k;
}
void qsort(int a[],int p,int r)
{
	if(p<r)
	{
		int q = partition(a,p,r);
		qsort(a,p,q-1);
		qsort(a,q+1,r);
	}
}
