#include <iostream>
using namespace std;

int MAX=5;
int deque1[5];
int front = -1;
int rear = -1;


int isFull() {
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}


int isEmpty() {
    return (front == -1);
}


void insertFront(int key) {
    if (isFull()) {
        cout<<"Overflow: Unable to insert element at the front. Deque is full.\n";
        return;
    }

    if (front == -1) {  
        front = 0;
        rear = 0;
    } else if (front == 0) {
        front = MAX - 1; 
    } else {
        front = front - 1;
    }

    deque1[front] = key;
    cout<<"\nInserted at the front. "<< key<<"\t";
}


void insertRear(int key) {
    if (isFull()) {
        cout<<"Overflow: Unable to insert element at the rear. Deque is full.\n";
        return;
    }

    if (rear == -1) {  
        front = 0;
        rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;  
    } else {
        rear = rear + 1;
    }

    deque1[rear] = key;
    cout<<"\nInserted at the rear.  "<< key<<"\t";
}


void deleteFront() {
    if (isEmpty()) {
        cout<<"\nUnderflow: Unable to delete element from the front. Deque is empty.";
        return;
    }

    int removed = deque1[front];

    if (front == rear) {  
        front = -1;
        rear = -1;
    } else if (front == MAX - 1) {
        front = 0; 
    } else {
        front = front + 1;
    }

    cout<<"\nDeleted from the front.  "<< removed;
}


void deleteRear() {
    if (isEmpty()) {
        cout<<"Underflow: Unable to delete element from the rear. Deque is empty.\n";
        return;
    }

    int removed = deque1[rear];

    if (front == rear) {  
        front = -1;
        rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;  
    } else {
        rear = rear - 1;
    }

    cout<<"Deleted from the rear.  "<< removed;
}

void displayDeque() {
    int i;
    if (isEmpty()) {
        cout<<"Deque is empty.\n";
        return;
    }
    cout<<"\nQueue elements are: \n";
    if(front>rear)
    {
        for(i=front;i<MAX;i++)
            cout<<deque1[i]<<"\t";
        for(i=0;i<=rear;i++)
            cout<<deque1[i]<<"\t";       
    }
    else
    {
        for(i=front;i<=rear;i++)
            cout<<deque1[i]<<"\t";
    }
    cout<<"\n";
}

int main() {
    
    insertRear(55);
    displayDeque();

     insertFront(44);
     displayDeque();
    
     insertRear(33);
     displayDeque();

     deleteFront();
    displayDeque();

    deleteRear();
    displayDeque();
    
    return 0;


}

