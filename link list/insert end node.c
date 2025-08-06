#include<stdio.h>
#include<stdlib.h>
struct Node *creatLinkList(int arr[],int size);

void printList(struct Node *head);
void insertAtEnd(struct Node *head,int data);
struct Node{
    int data;
    struct Node*next;

};

int main()
{
    int a[]={5,10,30};
    struct Node *head;
    head=creatLinkList(a,3);
    printList(head);

    insertAtEnd(head,222);
    return 0;
}
void insertAtEnd(struct Node *head,int data)
{
    struct Node *current=head;
    //traverse and go to the end of list
    while(current->next !=NULL)
    {
        current=current->next;
    }
    //create new node with data
    struct Node *temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    //insert
    current->next=temp;
    printList(head);
}
void printList(struct Node *head)
{
    struct Node *current=head;
      while(current!=NULL)
    {
        printf(" %d ->",current->data);
        current= current->next;
    }

    printf("NULL\n");
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
