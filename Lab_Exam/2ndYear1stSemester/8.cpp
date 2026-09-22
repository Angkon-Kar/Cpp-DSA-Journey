#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};



Node* insert(Node* node, int data){
    if(node == NULL){
        return new Node(data);
    }
    if(data < node->data){
        node->left = insert(node->left, data);
    }
    else{
        node->right = insert(node->right, data);
    }
    return node;
}


bool search(Node* root, int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    else if(key < root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


int main(){
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    int key = 40;
    if(search(root, key)){
        cout << "Element " << key << " found in the BST." << endl;
    }
    else{
        cout << "Element " << key << " not found in the BST." << endl;
    }

    return 0;
}