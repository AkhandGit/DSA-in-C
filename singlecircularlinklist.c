#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  

void beg_insert()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nEmpty List!!\n");  
    }  
    else   
    {  
        printf("\nEnter the node data?\n");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        printf("\nINSERTED ELEMENT!!\n");  
    }  
              
}  
void end_insert()  
{  
    struct node *ptr,*temp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nEmpty List!!\n");  
    }  
    else  
    {  
        printf("\nEnter Data\n");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
          
        printf("\nINSERTED ELEMENT!!\n");  
    }  
  
}  
  
void begin_delete()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nEmpty List!!\n");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nElement Deleted!!!\n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nElement Deleted!!!\n");  
  
    }  
}  
void end_delete()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("\nEmpty List!!\n");  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nElement Deleted!!!\n");  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("\nElement deleted!!!\n");  
  
    }  
}  
  
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag=1;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter element to search?\n");   
        scanf("%d",&item);  
        if(head ->data == item)  
        {  
        printf("\nItem found at location--> %d\n",i+1);  
        flag=0;  
        }  
        else   
        {  
        while (ptr->next != head)  
        {  
            if(ptr->data == item)  
            {  
                printf("\nItem found at location -->%d \n",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        }  
        if(flag != 0)  
        {  
            printf("\nItem not found!!\n");  
        }  
    }     
          
}  
  
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nNo element in linked list\n");  
    }     
    else  
    {  
        printf("\nElements in linked list-->\n");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }  
              
}  
void main ()  
{  
    int choice =0;  
    while(choice != 7)   
    {  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search an element\n6.Display\n7.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beg_insert();      
            break;  
            case 2:  
            end_insert();         
            break;  
            case 3:  
            begin_delete();       
            break;  
            case 4:  
            end_delete();        
            break;  
            case 5:  
            search();         
            break;  
            case 6:  
            display();        
            break;  
            case 7:
            printf("\nSIGNING OFF!!!\n");  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  