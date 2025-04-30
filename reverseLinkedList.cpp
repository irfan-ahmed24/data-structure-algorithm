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
    void createLinkedlist(){
        int amount,data;
        cout<<"Enter list amount:";
        cin>>amount;
        cout<<"Enter "<<amount<<" data :";
        for(int i=0;i<amount;i++){
            cin>>data;
            Node* newNode=new Node(data);
            if(head==NULL){
                head=tail=newNode;
            }
            else
            {
                tail->next=newNode;
                tail=tail->next;
            }
        }
    }

    void reverseList(){
        Node* prev=NULL;
        Node* curr=head;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        tail=head;
        head=prev;
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
    LL.createLinkedlist();
    LL.display();
    LL.reverseList();
    cout<<"after reverse"<<endl;
    LL.display();
}
