#include<stdio.h>
void selection_sort(int[],int);
int main(){
	int a[100],n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter element: ");
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	printf("Sorted Array: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}

void selection_sort(int a[],int n){
	int i,j,pos,temp;
	for(i=0;i<n-1;i++){
		pos=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[pos]){
				pos=j;
			}
		}
		
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
}
