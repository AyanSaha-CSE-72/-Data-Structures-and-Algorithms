#include<stdio.h>
#include<stdlib.h>
struct Node *creatLinkList(int arr[],int size);
void print(struct Node *head);
void insert(struct Node *head,int position,int value);

struct Node{
    int data;
    struct Node*next;

};
int main()
{
    int a[]={5,10,30,60,100};
    struct Node *head=NULL;
    head=creatLinkList(a,5);
    print(head);
    insert(head,1,555);

    return 0;
}
void insert(struct Node *head,int position,int value)
{
    struct Node*temp=head;
    int counter = 0;
    while(temp!=NULL)
    {
        counter++;
        if(counter == position)
        {
            //insert your node here
            struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
            newNode->data=value;
            newNode->next=temp->next;
            temp->next=newNode;

        }
        temp=temp->next;
    }
    print(head);
}
struct Node *creatLinkList(int arr[],int size)
{
   struct Node *head=NULL, *temp =NULL, *current = NULL;
   int i;
   for(i=0;i<size;i++)
   {
       temp=(struct Node *)malloc(sizeof(struct Node));
       temp->data=arr [i];
       temp->next =NULL;

       if(head==NULL)
       {
           head=temp;
           current=temp;
       }
       else
       {
           current->next=temp;
           current=current->next;
       }
   }
   return head;
}

void print(struct Node *head)
{
    struct Node *temp=head;
      while(temp!=NULL)
    {
        printf(" %d ->",temp->data);
        temp= temp->next;
    }

    printf("NULL\n");
}
