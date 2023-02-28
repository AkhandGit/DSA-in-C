#include <stdio.h>  
  
# define max 6  
int queue[max];  
int front=-1;  
int rear=-1;  

void enqueue(int element)  
{  
    if(front==-1 && rear==-1) 
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front)  
    {  
        printf("\n--OVERFLOW--\n");  
    }  
    else  
    {  
        rear=(rear+1)%max;      
        queue[rear]=element;   
    }  
}  
  

int dequeue()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("\n--UNDERFLOW--\n");  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued element is %d\n", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe dequeued element is %d\n", queue[front]);  
   front=(front+1)%max;  
}  
}  
// function to display the elements of a queue  
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty...\n");  
    }  
    else  
    {  
        printf("\nElements in a Queue are : \n");  
        while(i<=rear)  
        {  
            printf(" %d,", queue[i]);  
            i=(i+1)%max;  
        }  
        printf("\n\n");
    }  
}  
int main()  
{  
    int choice=1,x;  
      
    while(choice) 
    {  
    printf("\n Press 1: Insert an element: \n");  
    printf("\nPress 2: Delete an element: \n");  
    printf("\nPress 3: Display the element: \n");  
    printf("\nPress 4: Exit\n");
    printf("\nEnter your choice: \n");  
    scanf("%d", &choice);  
      
    switch(choice)  
    {  
          
        case 1:  
      
        printf("\nEnter the element which is to be inserted: \n");  
        scanf("%d", &x);  
        enqueue(x);  
        break;  
        case 2:  
        dequeue();  
        break;  
        case 3:  
        display();
        break;
        case 4:
        printf("<--Signing Off-->");
        choice=0; 
        break;
  
    }}  
    return 0;  
}  