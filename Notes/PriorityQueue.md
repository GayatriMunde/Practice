## Priority Queue
- An extension of queue with following properties:
  1. Every item has a priority associated with it.
  2. An element with high priority is dequeued before an element with low priority.
  3. If two elements have the same priority, they are served according to their order in the queue.  
  

- Operations
  1. insert(item, priority): Inserts an item with given priority.
  2. getHighestPriority(): Returns the highest priority item.
  3. deleteHighestPriority(): Removes the highest priority item.  
  
  
- Implementation
  1. Using array:
     ``` c++
     struct item {
         int item;
         int priority;
      }
      ```
     Time Complexity of operations
     1. Insert : O(1)
     2. getHighestPriority : O(n)
     3. deleteHighestPriority : O(n)

  2. Using Binary Heap
     Time Complexity of operations
     1. Insert : O(n)
     2. getHighestPriority : O(1)
     3. deleteHighestPriority : O(n)     
