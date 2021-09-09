#include<stdio.h>
void merge(int a[],int f, int l);
void sort(int a[], int f, int m, int l);
void main()
{
	int a[100],n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&a[i]);
	}
	merge(a,0,n-1);
	printf("\n After sorting : ");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
}
void merge(int a[], int f, int l)
{
	int m=(f+l)/2;
	if(f<l)
	{
		merge(a,f,m);
		merge(a,m+1,l);
		sort(a,f,m,l);
		
	}
}
void sort(int a[], int f, int m, int l)
{
	int x=f,y=m+1,k=f;
	int temp[100];
	int i;
	while(x<=m && y<=l)
	{
		if(a[x]<a[y])
		 temp[k++]=a[x++];
		else if(a[y]<a[x])
		 temp[k++]=a[y++];
		else
		{
			temp[k++]=a[x++];
			temp[k++]=a[y++];
		}
	}
	if(x>m)
	{
		for(i=y;i<=l;i++)
		 temp[k++]=a[i];
	}
	else
	{
		for(i=x;i<=m;i++)
		 temp[k++]=a[i];
	}
	
	for(i=f;i<=l;i++)
	 a[i]=temp[i];
}
