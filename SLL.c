#include<stdio.h>
#include<stdlib.h>

//self referential structure for node
typedef struct node
{
    int data;
    struct node *link;
}*NODE;

//UDF to create node
NODE create_node()
{
    NODE newn=(NODE)malloc(sizeof(struct node));
    if(newn==NULL)
    {
        printf("Error. Memory not allocated\n");
    }
    else
    {
        printf("Enter data:\n");
        scanf("%d",&newn->data);
        newn->link=NULL;
    }
    return newn;
}

//UDF for insertion of SLL at end
NODE insert_end(NODE head)
{
    NODE newn=create_node();
    if(head==NULL)
        head=newn;
    else
    {
        NODE cur=head;
        while(cur->link!=NULL)
          {
              cur=cur->link;
          }
          cur->link=newn;
    }
    return head;
}

//UDF for insertion of SLL at starting
NODE insert_start(NODE head)
{
    NODE newn=create_node();
    if(head==NULL)
        head=newn;
    else
    {
        newn->link=head;
        head=newn;
    }
    return head;
}

//UDF for displaying SLL
void display_list(NODE head)
{
    if(head==NULL)
    {
        printf("Display list error: SLL empty\n");
    }
    else
    {
        NODE cur=head;
        while(cur!=NULL)
        {
            printf("%d-> ",cur->data);
            cur=cur->link;
        }
    }
}

//menu driven main function
int main()
{
    NODE head=NULL;
    int ch;
    printf("Singly linked list Menu.\n");
    printf("Press 1.Insert_end 2. Insert_start 3.Display 4.Exit\n");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: head=insert_end(head);
                    printf("Insert end successful. \n");
                    break;
            case 2: head=insert_start(head);
                    printf("Insert start successful. \n");
                    break;
            case 3: display_list(head);
                    break;
            case 4: exit(0);
            default: printf("Invalid choice.\n");
            break;
        }
    }
    return 0;
}
