#include<stdio.h>
void swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void heapify(int a[], int n, int ind)
{
	int large=ind;
	int left=2*ind+1;
	int right=2*ind+2;
	if(left<n && a[left]>a[large])
	 large=left;
	
	if(right<n && a[right]>a[large])
	 large=right;
	 
	if(large!=ind)
	{
		swap(&a[ind],&a[large]);
		heapify(a,n,large);
	}
	 
}



void sort(int a[], int n)
{
	int i;
	for(i=n/2-1;i>=0;i--)
	 heapify(a,n,i);
	 
	for(i=n-1;i>=0;i--)
	{
	 swap(&a[0],&a[i]);
	 heapify(a,i,0);
   }
}
void main()
{
	int a[100],i,n;
	printf("Enter Number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter No: ");
		scanf("%d",&a[i]);
	}
	sort(a,n);
	for(i=0;i<n;i++)
	 printf(" %d",a[i]);
}
