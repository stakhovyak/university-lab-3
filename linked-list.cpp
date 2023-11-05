#include <iostream>
#include "include/node-list.h"
using std::cout, std::endl;

// Default constructor
Linkedlist::Linkedlist()
{
  head = nullptr;
}

// Default destructor
Linkedlist::~Linkedlist()
{
  Node* current = head;
  while (current != nullptr)
    {
      Node* temp = current;
      current = current->next;
      delete temp;
    }
}

// Function to insert a new node. 
void Linkedlist::insertNode(int data) 
{ 
  Node* newNode = new Node(data);
  if (head == nullptr)
    {
      head = newNode;
    }
  else
    {
      Node* current = head;
      while (current->next != nullptr)
        {
          current = current->next;
        }
      current->next = newNode;
    }
} 
  
// Function to print the 
// nodes of the linked list. 
void Linkedlist::printList() 
{ 
  Node* current = head;
  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

void Linkedlist::reverseList() 
{ 
  Node* prev = NULL; 
  Node* current = head; 
  Node* next = NULL; 
  
  while (current != NULL)
    { 
      next = current->next; 
      current->next = prev; 
      prev = current; 
      current = next; 
    } 
  
  head = prev; 
} 
