
This project is a simple implementation of a Queue data structure in C++. The Queue is implemented using a linked list.

The `Node` class represents each element in the linked list:




![image](https://github.com/jels7/Assignment-3/assets/146127905/d1366e06-f9d5-495e-b536-d9bb8cfbdb56)




- `data`: The value of the node.
- `next`: A pointer to the next node in the list.


The `Queue` class represents the Queue data structure:

- `front`: A pointer to the front of the queue.
- `rear`: A pointer to the rear of the queue.

The `Queue` class has the following methods:

- `isEmpty()`: Checks if the queue is empty. Returns `true` if the queue is empty, `false` otherwise.
- `enqueue(int value)`: Adds an element to the back of the queue.
  ![image](https://github.com/jels7/Assignment-3/assets/146127905/ee10c43b-0148-4bb9-a396-d3d17b4e4b57)

- `dequeue()`: Removes an element from the front of the queue and returns its value. If the queue is empty, it returns `-1`.
  ![image](https://github.com/jels7/Assignment-3/assets/146127905/6f17f541-90ff-4b24-bc9e-cbeba53f965d)


The `main()` function demonstrates the usage of the `Queue` class. It creates a `Queue` object, enqueues some values, and then dequeues them.
