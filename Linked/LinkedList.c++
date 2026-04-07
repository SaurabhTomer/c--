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

    for(int i = 1 ; i < n ; i++){
        Node* node = new Node(arr[i]);
        temp -> next = node;
        temp = temp -> next;        // temp aage badhao
    }

    return head;
}

void printLL(Node* head){

    Node* temp = head;

   while( temp != nullptr){
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


Node* deleteTail(Node* head) {
    if (!head) return nullptr;        // empty list
    if (!head->next) {                // sirf ek node
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}

Node* deleteK(Node* head , int k){

    if(head == nullptr) return head;

    if( k == 1){
        Node* temp = head;
        head = head -> next;
        delete head;
        return head;
    }

    int count = 0 ; 
    Node* temp = head;
    Node* prev = nullptr;       // to track previous node

    while( temp != nullptr){    
        count++;
        if( count == k){
            prev -> next = prev->next->next;
            break;
        }
        prev = temp;        // move prev forward first 
        temp = temp -> next;    //then move temp
    }
    return head;
}


Node* deleteEl(Node* head , int el){

    if(head == nullptr) return head;

    if( head->data == el){
        Node* temp = head;
        head = head -> next;
        delete head;
        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;       // to track previous node

    while( temp != nullptr){   
        if( temp->data == el){
            prev -> next = prev->next->next;
            break;
        }
        prev = temp;        // move prev forward first 
        temp = temp -> next;    //then move temp
    }
    return head;
}


Node* insertAtHead(Node* head, int val) {
    Node* node = new Node(val);
    Node* temp  = head;
    node->next = temp;    // node ka next pehla wala head
    head = node;          // head ab naya node hai
    return head;
}

Node* insertAtEnd(Node* head, int val) {
    Node* node = new Node(val);
    
    if (!head) return node;  

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = node;
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


    // cout << endl;
    // head = deleteTail(head);
    // printLL(head);
    
    // cout << endl;
    // head = deleteK(head , 2);
    // printLL(head);

    //   cout << endl;
    // head = deleteEl(head , 4);
    // printLL(head);

    // cout << endl;
    // head = insertAtHead(head , 150);
    // printLL(head);

    cout << endl;
    head = insertAtEnd(head , 15);
    printLL(head);


}