#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[20][20],i,j,k,t,m,n;
	printf("Enter No.Of Rows:");
	scanf("%d",&m);
	printf("Enter No.Of Columns:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter Element:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Original Matrix:");
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}                                                                                                               
    for(i=0;i<m;i++)
	{
		for(j=0;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[i][j]>a[i][k])
				{
					t=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=t;
				}
			}
		}
		}
	for(j=0;j<n;j++)
	{
		for(i=0;i<m-1;i++)
		{
			for(k=i+1;k<m;k++)
			{
				if(a[i][j]>a[k][j])
				{
					t=a[i][j];
					a[i][j]=a[k][j];
					a[k][j]=t;
				}
			}
		}
			}
printf("Sorted Matrix:");
printf("\n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("\t%d",a[i][j]);
	}
	printf("\n");				
}
}
