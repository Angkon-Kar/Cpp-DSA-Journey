#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertEnd(Node** head, int val){
    Node* newNode = new Node();
    newNode->data = val;

    if(*head == NULL){
        *head = newNode;
        newNode->next = *head;
        return;
    }

    Node* temp = *head;
    while(temp->next != *head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = *head;
    return;
}

void traverse(Node* head){
    if(head == NULL){
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = head;
    cout << "Circular Linked List: ";
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);
    cout << endl;
}

int main(){
    Node* head = NULL;

    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);

    traverse(head);

    return 0;
}