#include "node.h"
// Linked list class to 
// implement a linked list. 
class Linkedlist
{ 
  Node* head; 
  
 public: 
  // Default constructor 
  Linkedlist();

  // Default destructor
  ~Linkedlist();

  // Function to insert a 
  // node at the end of the 
  // linked list. 
  void insertNode(int); 
  
  // Function to print the 
  // linked list. 
  void printList(); 

  // Function to reverse the list
  // reversing the pointers
  void reverseList();
}; 
