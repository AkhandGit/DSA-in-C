#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
int count=0;
struct Node *Start=NULL;
void insert_in_begin(int data){
    struct Node*p=(struct Node*)malloc(sizeof(struct Node));
    p->data=data;
    p->next=NULL;
    if(Start==NULL)
        Start=p;
    else{
        p->next=Start;
        Start=p;
    }
    count++;
    printf("\nINSERTED>>>>\n");
    }
void insert_in_end(int data){
    struct Node*p=(struct Node*)malloc(sizeof(struct Node));
    p->data=data;
    p->next=NULL;
    if(Start==NULL)
        Start=p;
    struct Node* t=Start;
    while(t->next!=NULL)
        t=t->next;
    t->next=p;
    count++;
    printf("\nINSERTED>>>>\n");
}
void insert_at_pos(int pos,int data){
    int i=1;
    struct Node*p=(struct Node*)malloc(sizeof(struct Node));
    p->data=data;
    p->next=NULL;
    struct Node*t=Start;

    if(pos>count){
        printf("\nINVALID POSITION>>>>\n");
    }
    else{
        while(i<pos){
            t=t->next;
            i++;
        }
        p->next=t->next;
        t->next=p;
        count++;
        printf("\nINSERTED>>>>\n");
    }

}
void traverse(){
    struct Node* t=Start;
    printf("\n Elements in L.L. is ");
    while(t!=NULL){
        printf(" %d ",t->data);
        t=t->next;
    }
    printf("\n Total Element = %d\n",count);
    }
void search(int data){
    struct Node* t=Start;
    int count=0,i=0;
    while(t!=NULL){
        count++;
        if (t->data==data){
            printf("Element Found at->%d\n",count);
            i++;
            break;}
        t=t->next;
        }
    i==0?printf("Element not found:(\n"):printf("---Search Complete---\n");
    }
void delete_beg(){
    struct Node* t=Start;
    if(Start==NULL){
        printf("\nNo element to delete>>>>\n");
        return;
    }
    Start=t->next;
    free(t);
    printf("\n DELETED.....\n");
    count--;
    }
void delete_end(){
    struct Node* t=Start;
    if(Start==NULL){
        printf("No element to delete>>>>\n");
        return;
    }
    while (t->next!=NULL)
        t=t->next;
    free(t->next);
    printf("\n DELETED.....\n");
    count--;
    }
    void delete_at_pos(int pos){
        struct Node*t=Start,*newnode;
        int i=1;
        if(Start==NULL){
            printf("No element to delete>>>>\n");
        return;
        }
        while(i<pos){
            t=t->next;
            i++;
        }
        newnode=t->next;
        t->next=newnode->next;
        free(newnode);
        printf("\nDELETED......\n");
        count--;

    }
void main(){
    int pos,data,i;
    while (1){
        printf("ENTER CHOICE:-\n1)Insert in Begining\n2)Insert in End\n3)Insert after a positon\n4)Traverse\n5)Search\n6)Delete in Begining\n7)Delete in End\n8)Delete from a position\n9)End\n-->");
        scanf("%d",&i);
        switch (i){
            case 1:
                printf("Enter Data->");
                scanf("%d",&data);
                insert_in_begin(data);
                break;
            case 2:
                printf("Enter Data->");
                scanf("%d",&data);
                insert_in_end(data);
                break;
            case 3:
                printf("Enter Position->");
                scanf("%d",&pos);
                printf("Enter Data->");
                scanf("%d",&data);
                insert_at_pos(pos,data);
                break;
            case 4:
                traverse();
                break;
            case 5:
                printf("Enter Data->");
                scanf("%d",&data);
                search(data);
                break;
            case 6:
                delete_beg(data);
                break;
            case 7:
                delete_end(data);
                break;
            case 8:
                printf("Enter Position->");
                scanf("%d",&pos);
                delete_at_pos(pos);
                break;
            case 9:
                printf("Thanks.........");
                return;
            default:
                printf("INVALID>>>>>>>>>");
                break;
            }
    }
}