#include<stdio.h>
int BinarySearch(int arr[],int l,int r,int x){
	if(r>=1){
		int mid =l+(r-l)/2;
		
		if (arr[mid]==x) return mid;
		
		if (arr[mid]>x) return BinarySearch(arr,l,mid-1,x);
		
		else return BinarySearch(arr,mid+1,r,x);
		
	}
	
	return -1;
}


void bubble_sort(int arr[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(void){
	int x,size,i;
	int arr[100];
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("Enter elements: ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr, size);
    printf("\n");
    printf("Enter key to search\n");
    scanf("%d", &x);
    
	int result=BinarySearch(arr,0,size-1,x);
	if(result==-1){
		printf("Element not found in array");
	}
	else{
		printf("Element found at index: %d",result);
	}
	return 0;
}
