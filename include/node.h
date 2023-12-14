#ifndef NODE_H
#define NODE_H

// Node class to represent 
// a node of the linked list.
template <typename T>
class Node
{ 
 public: 
  T data; 
  Node<T>* next; 
  
  // Default constructor 
  Node();

  // Default destructor
  virtual ~Node();
  
  // Parameterised Constructor 
  Node(T data);
}; 

#endif
