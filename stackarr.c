#include<stdio.h>

#define Max 100

int top=-1;

void push(int *stack,int n){

           int item;

           printf("enter the no.:-");

           scanf("%d",&item);

           if(top>=n-1){

                      printf("Stack is overflow:-");

                      return;

           }

           else{

                      top=top+1;

                      stack[top]=item;

           }

}

void pop(int *stack,int n){

           if(top<=-1){

                      printf(" Stack underflow");

                      return;

           }

           else{

                      int data=stack[top];

                      top=top-1;

           }

}         

          

 

main(){

           int a;

           printf("Enter the length of stack::");

           scanf("%d",&a);

           int stack[a];

           int n,i;

           int c=1;

           while(c){

           printf("\nTo Do:\n0.exit\n1.push a no.\n2.print the stack\n3.pop\n");

           scanf("%d",&n);

           switch(n){

                      case 1:

                                 push(stack,a);

                                 break;

                      case 3:

                                 pop(stack,a);

                                 break;

                      case 2:

                                 for(i=top;i>=0;i--){

                                 printf(" %d ",stack[i]);}

                                 break;

                      case 0:

                                 c=0;

           }

           }

}