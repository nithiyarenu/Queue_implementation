This program demonstrates a simple implementation of a queue data structure using an array in C++. The Queue class provides essential queue operations such as enqueue, dequeue, and checking if the queue is full or empty. Below is a detailed explanation of the operations this code performs and some common applications of queues.

OPERATIONS PERFORMED:

Enqueue (enqueue(int value)):
   Adds an element to the rear of the queue. If the queue is full, the operation will not be performed.
   
Dequeue (dequeue()):
   Removes an element from the front of the queue. If the queue is empty, the operation will not be performed.
   
Check if Queue is Empty (isEmpty()):
   Returns true if the queue is empty, otherwise returns false.
   
Check if Queue is Full (isFull()):
   Returns true if the queue is full, otherwise returns false.
   
Count Elements in Queue (count()):
   Returns the number of elements currently in the queue.
   
Display Queue Elements (display()):
   Prints all the elements currently in the queue.
   
Clear Screen (system("cls")):
   Clears the console screen. (Note: This function is platform-dependent and works on Windows systems.)
   
QUEUE APPLICATIONS:

CPU Scheduling:
   Queues are used in CPU scheduling to manage processes, ensuring that they are executed in an orderly fashion based on scheduling algorithms like First-Come, First-Served (FCFS).
   
Disk Scheduling:
   In operating systems, queues manage disk scheduling by organizing requests for disk access, optimizing the order in which these requests are serviced.
   
Handling Interrupts:
   Queues manage hardware and software interrupts in systems, ensuring that they are processed in the order they occur or based on priority.
   
Task Scheduling:
   Queues are used in operating systems for task scheduling, where processes are managed in a queue structure.
   
Breadth-First Search (BFS):
   Queues are used to implement BFS, an algorithm for traversing or searching tree or graph data structures.
   
Handling Requests in Networks:
   Queues manage requests in networked systems, such as handling incoming and outgoing data packets.
