#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

void inserAtHead(Node*& head , int val){
  
    Node* node1 = new Node(val);    // node create hogi val
    node1->next = head; // node1 k  next mai previous head ka address
    head = node1;       //new node
    
}

void print(Node* head){

    Node* temp = head;

    while( temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int Count(Node* head){
    int count = 0;

    Node* temp = head;

    while( temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}


void inserAtTail(Node*& head , int val){
    Node* node1 = new Node(val);        // create a node

    if(!head){      // if ll is not present then create and return 
        head = node1 ;
        return;
    }

    Node* temp = head;      // now point temp to  head

    while(temp ->next != nullptr ){     // agr temp ka next nullptr k eqaul nhi h toh chlte rho
        temp = temp->next;
    }
    temp->next = node1;     // nullptr mil gya toh node insert krdo
}


void insertAtPosition(Node*& head , int val , int pos){
    Node* node1 = new Node(val);
    if(pos == 0){
        node1->next = head;
        head = node1;
        return;
    }
}
int main(){

    Node* head = nullptr;
    
    inserAtHead(head , 20);
    inserAtHead(head , 30);

    // print(head);        //print the ll

    // int res = Count(head);  // cout the length of ll
    // cout << endl;
    // cout <<"size of ll is : " << res;

    inserAtTail(head , 100);
    print(head);



}