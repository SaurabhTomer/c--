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

int main(){

    Node* node1 = new Node(10);         //object is created
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

}