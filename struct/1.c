#include<stdlib.h>
#include<stdio.h>


struct node 
{
    int value;
    struct node *next;
    struct node *prev;
}*head=NULL,*last=NULL;



int count=0;
void create(int a)
{
    struct node *temp=head,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node*));
    newnode->value=a;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        last=head;
    }

    else
    {
      newnode->next=head;
      head->prev=newnode;
      
      head=newnode;
    }
    count++;
    
}

void disp()
{
    struct node *temp1=head->next,*temp2=head;
    /*int flag=0;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->value!=temp2->value)
        {
        flag=1;break;}
        temp1=temp1->next;
        temp2=temp2->prev;
    }*/

    while(temp1->next!=NULL)
    {
        int temp=temp1->value;
        temp1->value=temp2->value;
        temp2->value=temp;
        temp1=temp1->next->next;
        temp2=temp2->next->next;
    }
    temp1=last;
    while(temp1!=NULL)
    {
        printf("%d ->",temp1->value);
        temp1=temp1->prev;
    }
   
}

int main()
{
    struct comp* a1;
    int a;
    while(1)
    {
        scanf("%d",&a);
        if(a==-99)
        break;
        create(a);
        
    }
    disp();
}
