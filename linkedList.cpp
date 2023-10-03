#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct node{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  head=(struct node* )malloc(sizeof(struct node));
  second=(struct node* )malloc(sizeof(struct node));
  third=(struct node* )malloc(sizeof(struct node));
  head->data=5;
  head->next=second;
  second->data=6;
  second->next=third;
  third->data=7;
  third->next=NULL;
  printf("enter the value of head: ");
  scanf("%d",&head);
  linkedlisttraversal(head);
  return 0;
}