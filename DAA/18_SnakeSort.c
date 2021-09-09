#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void bubble_sort(int *arr, int rows, int columns, int row_num, int col_num)
{
	int temp,i,j;
	if (col_num == -1)
	{
		for (i = 0; i < columns; i++)
		{
			for (j = 0; j < columns-i-1; j++)
			{
				if ((*(arr + (row_num * columns) + j) > *(arr + (row_num * columns) + j + 1)) && !(row_num % 2))
				{
					temp = *(arr + (row_num * columns) + j);
					*(arr + (row_num * columns) + j) = *(arr + (row_num * columns) + j + 1);
					*(arr + (row_num * columns) + j + 1) = temp;
				}
				else if ((*(arr + (row_num * columns) + j) < *(arr + (row_num * columns) + j + 1)) && (row_num % 2))
				{
					temp = *(arr + (row_num * columns) + j);
					*(arr + (row_num * columns) + j) = *(arr + (row_num * columns) + j + 1);
					*(arr + (row_num * columns) + j + 1) = temp;
				}
			}
		}
	}
	else if (row_num == -1)
	{
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < rows-i-1; j++)
			{
				if (*(arr +  (columns * j) + col_num) > *(arr + (columns * (j + 1)) + col_num))
				{
					temp = *(arr + (columns * j) + col_num);
					*(arr + (columns * j) + col_num) = *(arr + (columns * (j + 1)) + col_num);
					*(arr + (columns * (j + 1)) + col_num) = temp;
				}
			}
		}
	}
}

void sort_snake(int *arr, int n)
{
	int j;
	for (j = 0; j < n; j++)
		bubble_sort(arr,n,n,j,-1);
}

void sort_column(int *arr, int n)
{
	int j;
	for (j = 0; j < n; j++)
		bubble_sort(arr,n,n,-1,j);
}

void sort_2D(int *arr, int n)
{
	int i,val;
	val = (int)(log(n)/log(2));
	for (i = 0; i <= val; i++)
	{
		sort_snake(arr,n);
		sort_column(arr,n);
	}
}

int main()
{
	int n,i,j,val;
	printf("Enter number of dimensions:");
	scanf("%d",&n);
	int *arr = (int *)malloc(n * n * sizeof(int));
	printf("\n--------------------------Enter the %dx%d matrix--------------------------\n",n,n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Row:%d\tColumn:%d\t:-\t",i+1,j+1);
			scanf("%d",&val);
			*(arr + n * i + j) = val;
		}
	}
	printf("\n--------------------------The matrix before sorting--------------------------\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			val = *(arr + n * i + j);
			printf("%d\t",val);
		}
		printf("\n");
	}
	sort_2D(arr,n);
	printf("\n--------------------------The matrix after sorting--------------------------\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			val = *(arr + n * i + j);
			printf("%d\t",val);
		}
		printf("\n");
	}
}
