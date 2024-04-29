#include <iostream>

// Node class to represent each element in the linked-list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Queue class
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Method to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Method to add an element to the back of the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        std::cout << value << " enqueued to the queue." << std::endl;
    }

    // Method to remove an element from the front of the queue and return its value
    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return -1; 
        }

        Node* temp = front;
        int value = temp->data;
        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;

        return value;
    }
};

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Dequeued: " << queue.dequeue() << std::endl;
    std::cout << "Dequeued: " << queue.dequeue() << std::endl;
    std::cout << "Dequeued: " << queue.dequeue() << std::endl;
    std::cout << "Dequeued: " << queue.dequeue() << std::endl;

    return 0;
}