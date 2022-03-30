#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*head;
void createlist(int n){
    int i,data;
    struct node* prevnode,*newnode;
        head=malloc(sizeof(struct node));
        if(head==NULL){
            printf("unable to allocate memory");
        }
        printf("enter the data of node 1:");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        prevnode=head;
        for(i=2;i<=n;i++){
            newnode=malloc(sizeof(struct node));
            printf("enter the data of node %d:",i);
            scanf("%d",&data);
            newnode->data=data;
            newnode->next=NULL;
            prevnode->next=newnode;
            prevnode=newnode;
        }
        prevnode->next=head;
        printf("cll is created successfully");
    }
void display(){
    struct node* current;
    
    if(head==NULL){
        printf("list is empty\n");
    }
    else{
        current=head;
        do{
            printf(" %d\t",current->data);
            current=current->next;
        }while(current!=head);
    }
}
void main(){
    int n,data;
    printf("enter the total no of node:");
    scanf("%d",&n);
    createlist(n);
    
    printf("data in the list:");
    display();
}
