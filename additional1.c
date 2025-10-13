#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Function to add an element to the queue
void INSERT(int value) {
    if (rear == MAX - 1) {
        printf("Queue overflow\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("inserted element: %d\n", value);
    }
}
void delete() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
    } else {
        printf("deleted element: %d\n", queue[front]);
        front++;
    }
}

// Function to display the front element
void displayFront() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

int main() {
    INSERT(10);
    INSERT(20);
    INSERT(30);
    display();
    delete();
    display();
    return 0;
}
