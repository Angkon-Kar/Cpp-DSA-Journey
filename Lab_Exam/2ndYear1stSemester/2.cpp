#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void traverse(Node* node){
    while(node != NULL){
        cout << node->data << " ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

void insertHead(Node** head, int val){
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
}

void deleteNode(Node** head, int key){
    Node* temp = *head;
    Node* prev = NULL;

    if(temp != NULL && temp->data == key){
        *head = temp->next;
        delete temp;
        return;
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    
    if(temp == NULL){
        return;
    }

    prev->next = temp->next;
    delete temp;
}

int main(){
    Node* head = NULL;

    insertHead(&head, 10);
    insertHead(&head, 20);
    insertHead(&head, 30);

    cout << "Linked List: ";
    traverse(head);

    insertHead(&head, 40);
    cout << "After Insertion: ";
    traverse(head);

    deleteNode(&head, 20);
    cout << "After Deletion: ";
    traverse(head);

    return 0;
}