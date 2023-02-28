#include <stdio.h>
int main()
{
  int i, beg, end, mid, n,key, arr[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter value to find:\n");
  scanf("%d", &key);

  beg = 0;
  end = n - 1;
  mid = (beg+end)/2;

  while (beg<= end) {
    if (arr[mid] < key)
      beg = mid + 1;
    else if (arr[mid] ==key) {
      printf("found at location %d\n",mid+1);
      break;
    }
    else
      end = mid - 1;

    mid = (beg + end)/2;
  }
  if (beg > end){
    
    printf("Not Found!");
  }
  printf("\n Submitted by:Akhand Pratap Singh");
  printf("\n 2101641520010");
  return 0;
}