#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;    
};
struct node*start=NULL;
int count=0;
void traverse()
{
    struct node *ptr;
    if(start == NULL)
    {
        printf("\nEmpty List\n");
        return;
    }

    struct node*temp;
    temp=start;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}
void insertatFront(){
    int data;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number to be inserted:");
    scanf("%d",&data);
    temp->data=data;
    temp->prev=NULL;
    temp->next=start;
    start=temp;
    count++;
    printf("\nINSERTED>>>\n");
}
void insertAtEnd(){
    int data;
    struct node*temp,*trav;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->next=NULL;
    printf("\nEnter the number to be inserted:\n");
    scanf("%d",&data);
    temp->data=data;
    temp->next=NULL;
    trav=start;
    if(start==NULL){
        start=temp;
        printf("\nINSERTED>>>\n");
    }
    else{
        while(trav->next!=NULL){
            trav=trav->next;
        }
        temp->prev=trav;
        trav->next=temp;
        printf("\nINSERTED>>>\n");
    }
    count++;
}
void insertAtPosition(){
    int data,pos,i=1;
    struct node*temp,*newnode,*newnode1;
    printf("\nEnter the positon you want the element at >>>>>\n");
    scanf("%d",&pos);
    if(pos>count){
        printf("\nINVALID POSITION!!!!\n");
    }
    else{
        temp=start;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data to be inserted >>>>\n");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        newnode->prev=NULL;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newnode1=temp;
        newnode->prev=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next=newnode1;
        count++;
        printf("\nINSERTED>>>\n");
    }
    

}
void deleteatFront(){
      
    struct node *temp;  
    if(start == NULL)  
    {  
        printf("\n Empty List\n");  
    }  
    else if(start->next == NULL)  
    {  
        start = NULL;   
        free(start);  
        printf("\nElement deleted\n");  
        count--;
    }  
    else  
    {  
        temp = start;  
        start = start -> next;  
        start -> prev = NULL;  
        free(temp);  
        printf("\n!!! Element deleted!!!\n");  
        count--;
    }  
}

void delelteatEnd(){
    struct node *temp;  
    if(start == NULL)  
    {  
        printf("\nEmpty List!!");  
    }  
    else if(start->next == NULL)  
    {  
        start = NULL;   
        free(start);   
        printf("\n!!!Element Deleted!!!\n");  
        count--;
    }  
    else   
    {  
        temp = start;   
        if(temp->next != NULL)  
        {  
            temp = temp -> next;   
        }  
        temp -> prev -> next = NULL;   
        free(temp);  
        printf("\n!!!Element Deleted!!!\n");  
        count--;
    }  
}
void delelteatPosition(){
    struct node *ptr, *temp;  
    int data;  
    printf("\n Enter the data to be deleted : ");  
    scanf("%d", &data);  
    ptr = start;  
    while(ptr -> data != data)  
    ptr = ptr -> next;  
    if(ptr -> next == NULL)  
    {  
        printf("\nCan't delete\n");  
    }  
    else if(ptr -> next -> next == NULL)  
    {  
        ptr ->next = NULL;  
    }  
    else  
    {   
        temp = ptr -> next;  
        ptr -> next = temp -> next;  
        temp -> next -> prev = ptr;  
        free(temp);  
        printf("\nElement Deleted\n");  
        count--;
    }    

}
void search()  
{  
    struct node *temp;  
    int item,i=0,flag;  
    temp = start;   
    if(temp == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (temp!=NULL)  
        {  
            if(temp->data == item)  
            {  
                printf("\nitem found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            temp=temp->next;  
        }  
        if(flag==1)  
        {  
            printf("\nItem not found\n");  
        }  
    }     
          
}  
void main ()  
{  
int choice =0;  
    while(choice != 9)  
    {  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at specified location \n4.Delete from Beginning\n5.Delete from end\n6.Delete the node after a location \n7.Search\n8.Display\n9.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
                insertatFront();  
                break;  
            case 2:  
                insertAtEnd();  
                break;  
            case 3:  
                insertAtPosition();  
                break;  
            case 4:  
                deleteatFront();  
                break;  
            case 5:  
                delelteatEnd();  
                break;  
            case 6:  
                delelteatPosition();  
                break;  
            case 7:  
                search();  
                break;  
            case 8:  
                traverse();  
                break;  
            case 9:  
                printf("SIGNING OFF!!");  
                break;  
            default:  
                printf("Please enter valid choice..");  
        }  
    }  
}  