#include<stdio.h>
int main(){
	int n,i,j,temp=0,min;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
	
	for(i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
	
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min])
			min=j;
		}
		if(i!=min){
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
	    }		
	}
    printf("Sorted Array:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nSubmitted By:Akhand Pratap Singh\n");
    printf("2101641520010\n");
  	printf("CS-AI-II-A");
}