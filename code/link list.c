#include <stdio.h>
#include <stdlib.h>

typedef struct finalxm
{
    int data;
    struct finalxm *next;
}node;


 void insert_last(node *first)
 {
     int d;
     while(first->next!=NULL)
     {
         first=first->next;
     }
     first->next=(node*)malloc(sizeof(node));
     printf("\nEnter element :");
    scanf("%d",&d);
     first->next->data=d;
     first->next->next=NULL;

 }
 void display(node *first)
{

    while(first->next!=NULL)
    {

        printf(" %d  ",first->next->data);
        first=first->next;
    }
}


void insert_first(node *first)
{
    int d;
    node *temp=first->next;
    first->next=(node*)malloc(sizeof(node));
    printf("\n\nEnter element at the first : ");
    scanf("%d",&d);
    first->next->data=d;
    first->next->next=temp;
}


void delete_first(node *first)
{
    node *temp=first->next->next;
    first->next=NULL;
    first->next=temp;

}


void delete_last(node *first)
{
    while(first->next->next->next!=NULL)
    {
        first=first->next;
    }
     first->next->next=NULL;
}

total(node*first)
{
    int n=0;
    while(first->next!=NULL)
    {
        n++;
        first=first->next;
    }
    printf("\n\n Total node : %d",n);

}







int main()
{
    node *first=(node*)malloc(sizeof(node));
    first->next=NULL;


    insert_last(first);
    insert_last(first);

    printf("\n\nDisplay element : ");
    display(first);

    insert_first(first);
    printf("\n\nAfter Insert first Display element : ");
    display(first);

    delete_first(first);
    printf("\n\nAfter delete first Display element : ");
    display(first);


    delete_last(first);
    printf("\n\nAfter delete last Display element : ");
    display(first);

    total(first);




    return 0;
}
