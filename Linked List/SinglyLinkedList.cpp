#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    //constructor
    Node(int val){
        this ->data = val;
        this ->next = NULL;
    }
};
void insertAtHead(Node* &head, int d){      //inserting a node at the start
    //creating a new node 
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){     //inserting a node at the end
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPos(Node* &head,Node* &tail, int position, int d){          
//inserting a node at a specific positon in a linked list
    Node* temp = head;
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next=NULL){
        insertAtTail(tail,d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void print(Node* &head){          //Printing the linked list
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(Node* & head, int position) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

int main(){
    //created a new node
    Node* node1 = new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    
    //head and tail both ponited to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    insertAtHead(head,15);
    print(head);

    insertAtTail(tail,20);
    print(head);

    insertAtPos(head,tail,3,18);
    print(head);

    deleteNode(head,1);
    print(head); 

    return 0;
}