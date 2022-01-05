#include <stdio.h>
#include <stdlib.h>
//
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;
struct node *prev = NULL;

void insert(int data)
{

    struct node *link = (struct node*) malloc(sizeof(struct node));

    link->data = data;
    link->next = NULL;


    if(head==NULL)
    {
        head = link;
        return;
    }

    current = head;


    while(current->next!=NULL)
        current = current->next;

    current->next = link;
}

void display()
{
    struct node *ptr = head;

    int x=1;
    while(ptr != NULL)
    {
        printf("%d : %d \n",x++,ptr->data);
        ptr = ptr->next;
    }


}

void remove_data(int data)
{

    if(head==NULL)
    {
        printf("Still NID not listed \n");
        return;
    }

    if(head->data == data)
    {
        if(head->next != NULL)
        {
            head = head->next;
            return;
        }
        else
        {
            head = NULL;
            printf("Still NID not listed \n");
            return;
        }
    }
    else if(head->data != data && head->next == NULL)
    {
        printf("%d invalid NID number \n", data);
        return;
    }


    current = head;

    while(current->next != NULL && current->data != data)
    {
        prev = current;
        current = current->next;
    }

    if(current->data == data)
    {
        prev->next = prev->next->next;
        free(current);
    }
    else
        printf("%d this NID number not found in the list.", data);

}

int main()
{
    int option;

    while (1)
    {
        printf("\n\nEnter your Choice:\n\n1 Customer entry\n2 Provide service to customer\n3 Display available customer (NID)\n4 for Exit\n") ;

        scanf("%d",&option);
        if(option==1)
        {
            printf("Entry customer’s NID :  ");
            int x;
            scanf("%d",&x);
            insert(x);
        }
        else if(option==2)
        {
            printf("Entry customer’s NID for Provide service:  ");
            int y;
            scanf("%d",&y);
            remove_data(y);
        }
        else if(option==3)
        {
            printf("All listed customers are....!\n");
            display();
        }
        else if(option==4)return 0;

    }


    return 0;
}
