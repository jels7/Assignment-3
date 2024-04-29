
This project is a simple implementation of a Queue data structure in C++. The Queue is implemented using a linked list.


The `Node` class represents each element in the linked list:

- `data`: The value of the node.
- `next`: A pointer to the next node in the list.


The `Queue` class represents the Queue data structure:

- `front`: A pointer to the front of the queue.
- `rear`: A pointer to the rear of the queue.

The `Queue` class has the following methods:

- `isEmpty()`: Checks if the queue is empty. Returns `true` if the queue is empty, `false` otherwise.
- `enqueue(int value)`: Adds an element to the back of the queue.
- `dequeue()`: Removes an element from the front of the queue and returns its value. If the queue is empty, it returns `-1`.

The `main()` function demonstrates the usage of the `Queue` class. It creates a `Queue` object, enqueues some values, and then dequeues them.