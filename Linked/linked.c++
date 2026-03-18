#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){         // contructor is called when an object is created
        this -> data = data;
        this -> next = NULL;
    }
};


void insertAtHead(Node* &head , int d){

    //new node created
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail , int d){

    //new node created
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;

}

void insertAtPosition(Node* &head , Node* &tail , int position ,  int d){

    //insert at start
    if(position == 1){
        insertAtHead(head , d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while( cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    //insert at last
    if(temp -> next == NULL){
        insertAtTail(tail , d);
        return;
    }

    //new node created
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(10);         //object is created

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;


    //head pointed to node1
    Node* head = node1;
    //tail pointed to node1
    Node* tail = node1;
      

    // insert at head
            // print(head);  // 1st linked list


            // insertAtHead(head , 12);        //2nd linkedlist
            // print(head);

            
            // insertAtHead(head , 15);        //3rd linkedlist
            // print(head);



    //insert at tail
            // print(head);

            // insertAtTail(tail , 20);
            // print(head);

            // insertAtTail(tail , 30);
            // print(head);

    //insert at Position
            print(head);

            insertAtTail(tail , 20);
            print(head);

            insertAtTail(tail , 30);
            print(head);

            insertAtPosition(head , 3 , 25);    // insert at position
            print(head);



}