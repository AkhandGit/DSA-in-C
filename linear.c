#include<stdio.h>
int main()
{
    int a[100],i,n,key,flag=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("enter the element you want to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i]){
            printf("Position of element %d:",i+1);
            flag++;
            break;
        }
    }
    if (flag==0){
            printf("not found ");
    }
    printf("\n Submitted by:Akhand Pratap Singh");
    printf("\n 2101641520010");

    return 0;

}