#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* create_node()
{
    struct node *newn=(struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("Memory not allocated\n");
    else
    {
        scanf("%d",&newn->data);
        newn->link=NULL;
    }
    return newn;
}
struct node* insert_end(struct node *head)
{
    struct node *newn=create_node();
    if(head==NULL)
        head=newn;
    else
    {
        struct node *cur=head;
        while(cur->link!=NULL)
            cur=cur->link;
        cur->link=newn;
    }
    return head;
}
void display(struct node *head)
{
    if(head==NULL)
        printf("List is empty\n");
    else
    {
        struct node *cur=head;
        while(cur!=NULL)
        {
            printf("%d ",cur->data);
            cur=cur->link;
        }
    }
}
void split(struct node *head)
{
    struct node *list1=NULL,*list2=NULL,*cur=head,*cur1=NULL,*cur2=NULL,*newn=NULL;
    if(head==NULL)
        printf("List is empty\n");
    else
    {
        cur=head;
        while(cur!=NULL)
        {
            if(cur->data%2!=0)
            {
                newn=(struct node*)malloc(sizeof(struct node));
                newn->data=cur->data;
                newn->link=NULL;
                if(list1==NULL)
                    list1=newn;
                else
                {

                    cur1=list1;
                    while(cur1->link!=NULL)
                        cur1=cur1->link;
                    cur1->link=newn;
                }
            }
            else
            {
               newn=(struct node*)malloc(sizeof(struct node));
                newn->data=cur->data;
                newn->link=NULL;
                if(list2==NULL)
                    list2=newn;
                else
                {
                    cur2=list2;
                    while(cur2->link!=NULL)
                        cur2=cur2->link;
                    cur2->link=newn;
                }
            }
            cur=cur->link;
        }
        printf("\n\nList 1 is:\n");
        display(list1);
        printf("\n\nList 2 is:\n");
        display(list2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n>1)
    {
        struct node *head=NULL;
        for(int i=0;i<n;i++)
        {
            head=insert_end(head);
        }
        printf("Original list is:\n");
        display(head);
        split(head);
    }
    else
        printf("Invalid input\n");
    return 0;
}
