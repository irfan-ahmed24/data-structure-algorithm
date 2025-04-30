#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

class LinkedList
{
public:
    Node* head;
    Node* tail;

    LinkedList()
    {
        head=tail=NULL;
    }
    void createLL()
    {
        int listAmount,data;
        cout<<"how many data want to add:";
        cin>>listAmount;
        cout<<"Enter "<<listAmount<<" data:";
        for(int i=0; i<listAmount; i++)
        {
            cin>>data;
            Node* newNode=new Node(data);
            if(head==NULL)
            {
                head=tail=newNode;
            }
            else
            {
                tail->next=newNode;
                tail=tail->next;
            }
        }

    }
    void push_Back()
    {
        int data;
        cout<<"Enter data that you want to push back:";
        cin>>data;
        Node* newNode=new Node(data);
        if(head==NULL)
        {
            head=tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=tail->next;
        }
    }
    void display()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";

    }
};

int main()
{
    LinkedList LL;
    LL.createLL();
    LL.display();
    LL.push_Back();
    LL.display();
}
