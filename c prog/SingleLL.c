#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*head=NULL;
void disp(){
    struct node* t=head;
    if(head==NULL){
        printf("\nList is empty");
    }
    else{
        while(t->next!=NULL){
            printf("%d ",t->data);
            t=t->next;
        }
        printf("%d ",t->data);
    }
}
void insAtBegin(int val){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    printf("\nNew node added, new list is: ");
    disp();
}
void insInBetween(int val,int pos){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        struct node* t=head;
        int c=1;
        while(c<pos-1){
            t=t->next;
            c++;
        }
        newnode->next=t->next;
        t->next=newnode;
    }
    printf("New node added, new list is: ");
    disp();
}
void ins(){
    int val,pos;
    printf("Enter data to insert: ");
    scanf("%d",&val);
    printf("Enter position to insert: ");
    scanf("%d",&pos);
    if(pos==1){
        insAtBegin(val);
    }
    else{
        insInBetween(val,pos);
    }
}
int main(){
    int ch;
    
    do{
    printf("\nEnter choice: \n1.Insertion\n2.Deletion\n3.Traversal\n4.Exit\n: ");
    scanf("%d",&ch);
    switch(ch){
        case 1: {
            ins();
            break;
        }
        //case 2: del();
        case 3: {
            disp();
            break;
        }
        case 4: exit(0);
        default: printf("Wrong choice, enter again");
    }
    }while(ch!=4);
}