#include<stdio.h>
int get_max(int a[],int n){
   int max=a[0];
   int i;
   for(i=1;i<n;i++)
      if(a[i]>max)
         max=a[i];
   return max;
}
void radix_sort(int a[],int n){
   int bucket[10][10],bucket_cnt[10];
   int i,j,k,r,NOP=0,divisor=1,lar,pass;
   lar=get_max(a,n);
   while(lar>0){
      NOP++;
      lar/=10;
   }
   for(pass=0;pass<NOP;pass++){
      for(i=0;i<10;i++){
         bucket_cnt[i]=0;
      }
      for(i=0;i<n;i++){
         r=(a[i]/divisor)%10;
         bucket[r][bucket_cnt[r]]=a[i];
         bucket_cnt[r]+=1;
      }
      i=0;
      for(k=0;k<10;k++){
         for(j=0;j<bucket_cnt[k];j++){
            a[i]=bucket[k][j];
            i++;
         }
      }
      divisor*=10;
      printf("\nAfter pass %d : ",pass+1);
      for(i=0;i<n;i++)
         printf("%d ",a[i]);
   }
}
int main (){
   int i,n,a[10];
   printf("Enter the number of items to be sorted: ");
   scanf("%d",&n);
   printf("Enter items: ");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   radix_sort(a,n);
   printf("\nSorted array : ");
   for(i=0;i<n;i++)
      printf ("%d ",a[i]);
printf("\nSubmitted By:Akhand Pratap Singh\n");
printf("2101641520010\n");
printf("CS-AI-II-A");
return 0;
}