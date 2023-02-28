#include<stdio.h>
int main(){
	int n,i,j,temp=0,key;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while((j>=0)&&(arr[j]>key)){
			arr[j+1]=arr[j];
			j=j-1;
			}
		arr[j+1]=key;	
		}
	printf("\n sorted array is:\n");;
		
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nSubmitted By:Akhand Pratap Singh\n");
    printf("2101641520010\n");
  	printf("CS-AI-II-A");
		
}