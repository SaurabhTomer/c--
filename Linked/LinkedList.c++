#include<iostream>
using namespace std;
 
struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* convertArrToLL(int arr[] , int n){
    if(n == 0){
        return nullptr;
    }

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i = 1 ; i <= n ; i++){
        Node* node = new Node(arr[i]);
        temp -> next = node;
        temp = temp -> next;        // temp aage badhao
    }

    return head;
}

void printLL(Node* head){

    Node* temp = head;

   while( temp -> next != nullptr){
    cout << temp->data << " ";
    temp = temp -> next;
   }
}

Node* deleteHead( Node* head){
    if( !head){
        return nullptr;
    }
    Node* temp = head;
    head = temp ->next;
    delete temp ;
    return head;
}


Node* deleteTail(Node* head){
    Node* temp = head;

    while( temp -> next -> next != nullptr){
        temp = temp -> next;
    }
    delete(temp -> next);
    temp -> next = nullptr;

    return head;
}
int main(){

    // Node* head = nullptr;
    int arr[] = {1,2,3,4,5};
    int n = 5;

    Node* head = convertArrToLL(arr , n);
    convertArrToLL(arr , n);
    printLL(head);

    cout << endl;
    // head = deleteHead(head);
    // printLL(head);


    cout << endl;
    // head = deleteTail(head);
    // printLL(head);

}