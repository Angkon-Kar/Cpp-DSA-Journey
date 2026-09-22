#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

void traverseForward(Node* node){
    cout << "Forward Traversal: ";
    while(node != NULL){
        cout << node->data << " ";
        node = node->next;
    }
    cout << "NULL" << endl;
};

void traverseBackward(Node* node){
    Node* tail = node;
    while(tail->next != NULL){
        tail = tail->next;
    }
    cout << "Backward Traversal: ";
    while(tail != NULL){
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << "NULL" << endl;
}

void insertHead(Node** head, int val){
    Node* newNode = new Node();
    newNode-> data = val;
    newNode->next = *head;
    newNode->prev = NULL;
    if(*head != NULL){
        (*head)->prev = newNode;
    }
    *head = newNode;
};

int main(){
    Node* head = NULL;

    insertHead(&head, 10);
    insertHead(&head, 20);
    insertHead(&head, 30);

    traverseForward(head);
    traverseBackward(head);

    return 0;
}