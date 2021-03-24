// C++ program to Implement a stack
//using singly linked list
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

struct Node* top;

void push(int data)
{

    struct Node* temp;
    temp = new Node();


    if (!temp)
    {
        cout << "\nHeap Overflow";
        exit(1);
    }

    temp->data = data;

    temp->link = top;

    top = temp;
}

int isEmpty()
{
    return top == NULL;
}

int peek()
{

    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

void pop()
{
    struct Node* temp;

    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {

        temp = top;

        top = top->link;

        temp->link = NULL;

        free(temp);
    }
}

void display()
{
    struct Node* temp;

    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {

            cout << temp->data << "-> ";

            temp = temp->link;
        }
    }
}


bool src( int x)
{
    struct Node* temp;

    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            if(temp->data==x)return true;

            temp = temp->link;
        }
    }

    return false;
}



int main()
{
    while(1)
    {
        cout<<"\n1. Add \n2. Remove \n3. Show\n4. Erase duplication \n5. search \n";
        int x;
        cin>>x;
        if(x==1)
        {
            cout<<"Enter element ";
            int y;
            cin>>y;
            push(y);
        }
        else if( x==2)pop();
        else if(x==3) display();
        else if(x==4)
        {

        }
        else
        {
            cout<<"Enter search element"<<endl;
            int p;
            cin>>p;

            if(src(p))cout<<"Element found"<<endl;
            else cout<<"Element NOT found"<<endl;

        }
    }

    return 0;
}

