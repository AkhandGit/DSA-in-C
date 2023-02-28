/*

without recursion

#include<stdio.h>    
int main()    
{    
    int n1=0,n2=1,n3,i,num;    
    printf("Enter the number:");    //if taken 8
    scanf("%d",&num);    
    printf("\n%d %d",n1,n2);   // 0  1 
    for(i=1;i<num;++i) 
    {    
        n3=n1+n2;    // 1>n3=1 >>
        printf(" %d",n3);    //  1  2 3 5 8 13 21
        n1=n2;    
        n2=n3;    
    }  
    return 0;  
 }

*/
  
/*

#include<stdio.h>    
int Fibonacci(int num){    
    int n1=0,n2=1,n3;    
    if(num==0){    
         return 0;
    
    }
    else if (num==1)
    {
        return 1;
    }
    else
        return Fibonacci(num-1) + Fibonacci(num-2);
        
}    
int main(){    
    int i,term;    
    printf("Enter the number : ");    
    scanf("%d",&term);    
    for(i=0;i<term;i++){
        printf("%d ",Fibonacci(i));
    }
  return 0;  
 }   

 */ 

