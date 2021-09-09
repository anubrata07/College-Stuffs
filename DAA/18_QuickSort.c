#include<stdio.h>
void quicksort(int n[50],int p,int q){
	int i,j,pivot,temp;
	
	if(p<q){
		pivot=p;
		i=p;
		j=q;
		
		while(i<j){
			while(n[i]<=n[pivot]&&i<q)
				i++;
			while(n[j]>n[pivot])
				j--;
			if(i<j){
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
		
		temp=n[pivot];
		n[pivot]=n[j];
		n[j]=temp;
		quicksort(n,p,j-1);
		quicksort(n,j+1,q);
	}
}

int main(){
	int i,count,n[50];
	
	printf("Enter number of elements: ");
	scanf("%d",&count);
	
	printf("Enter elements: ");
	for(i=0;i<count;i++){
		scanf("%d",&n[i]);
	}
	quicksort(n,0,count-1);
	for(i=0;i<count;i++){
		printf("%d ",n[i]);
	}
	
	return 0;
}
