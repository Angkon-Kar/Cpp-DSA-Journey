#include <iostream>
using namespace std;

#define SIZE 10

class CircularQueue{
    int items[SIZE], front, rear;
public:
    CircularQueue(){
        front = -1;
        rear = -1;
    }

    bool isFull(){
        if(front == 0 && rear == SIZE - 1){
            return true;
        }
        if(front == rear + 1){
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    }


    void enqueue(int element){
        if(isFull()){
            cout << "Queue is full." << endl;
            return;
        }
        if(front == -1){
            front = 0;
        }
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        cout << "Inserted " << element << endl;
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Queue is empty." << endl;
            return;
        }
        int element = items[front];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front + 1) % SIZE;
        }
        cout << "Deleted " << element << endl;
    }
};


int main(){
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.dequeue();
    q.dequeue();

    q.enqueue(50);
    q.enqueue(60);

    return 0;
}