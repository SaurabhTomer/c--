#include<stdio.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
}

Node* insertElement(Node* head , int val){
    Node* temp = head;
    Node* node1 = new Node(val);
    if( !head){
        return node1;
    }
    
}

int main(){

}