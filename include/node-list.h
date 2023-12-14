#ifndef NODE_LIST_H
#define NODE_LIST_H

#include <iostream>
#include "node.h"

// Linked list class to 
// implement a linked list.
template <typename T>
class Linkedlist
{ 
  Node<T>* head; 
  
public: 
  // Default constructor 
  Linkedlist();

  // Default destructor
  ~Linkedlist();

  // Function to insert a 
  // node at the end of the 
  // linked list. 
  void insertNode(T value);

  // Funtion to insert the element
  // at index
  void insertNode(int data, unsigned int pos);
  
  // Function to print the 
  // linked list. 
  void printList(); 

  // Function to reverse the list
  // reversing the pointers
  void reverseList();
  
  // Function to delete element
  // at given position
  void deleteNode(unsigned int pos);

  // Funtion to find the length of the list
  size_t listLength();

  // The indexing function
  Node<T> *index(unsigned int index);
  const Node<T> *index(unsigned int index) const;
  
  // Function to write to a file
  void write();

  bool isIncreasing();
};

#endif 
