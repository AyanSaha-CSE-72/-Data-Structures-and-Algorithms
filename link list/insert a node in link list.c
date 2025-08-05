#include<stdio.h>
#include<stdlib.h>
struct Node *creatLinkList(int arr[],int size);

void insertAtBegining(struct Node *head,int data);
void printList(struct Node *head);
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
    insertAtBegining(head,500);
    return 0;
}
void insertAtBegining(struct Node *head,int data)
{
    struct Node *temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;


    struct Node *newHead = temp;
    struct Node *current=newHead;
    newHead=temp;
    printList(newHead);

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

