#include<stdio.h>
void insertion_sort(int[],int);
int main(){
	int a[50],n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter element: ");
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	printf("Sorted Array: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
void insertion_sort(int a[],int n){
	int i,j,key;
	for(i=0;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
