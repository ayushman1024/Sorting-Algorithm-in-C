/*Merge sort
By: Ayushman srivastava*/

#include<stdio.h>
void merge(int a[], int p , int m , int r)
{
	int i,j,k;
	int  n1 ,n2;
	n1 =  m-p +1;	n2 = r - m;
	int L[n1] , R[n2];
	
	for(i=0;i<n1;i++)
	{
		L[i] = a[p+i];
	}	
	for(j=0;j<n2;j++)
	{
		R[j] = a[m + 1 + j];
	}
	i=0;j=0;k=p;
	
	while((i< n1 )&&  (j < n2))
	{
		if(L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while(i< n1 )
	{
			a[k] = L[i];
			i++;	k++;
	}
	while(j< n2 )
	{
			a[k] = R[j];
			j++;	k++;
	}	
}
void msort(int a[],int p , int r)
{
	if(p<r)
	{
		int m = (r+p)/2;
		msort(a,p , m);
		msort(a,m+1,r);
		
		merge(a,p,m,r);
	}	
}

int main()
{
	int i,j,n;
	printf("enter size  ");
	scanf("%d",&n);
	int a[n];
		printf("enter array  ");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}	
		msort(a,0,n-1);
		printf("\n\n");
		for(i=0;i<n;i++)
		{
			printf("  %d",a[i]);
		}
		
	return 0;
}
