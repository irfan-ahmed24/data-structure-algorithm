#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    LinkedList(){
        head=tail=NULL;
    }
    void createList(){
        int data,amount;
        cout<<"enter list amount :";
        cin>>amount;
        cout<<"Enter "<<amount<<" data :";
        for(int i=0;i<amount;i++){
            cin>>data;
            Node* newNode=new Node(data);
            if(head==NULL){
                head=tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=tail->next;
            }
        }
    }

    void middleOfList(){
        cout<<endl<<"middle of list";
        Node* fast;
        Node* slow;
        fast=slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        cout<<"middle "<<slow->data;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};

int main(){
    LinkedList LL;
    LL.createList();
    LL.display();
    LL.middleOfList();
}
