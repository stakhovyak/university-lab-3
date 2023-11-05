// Node class to represent 
// a node of the linked list. 
class Node
{ 
 public: 
  int data; 
  Node* next; 
  
  // Default constructor 
  Node();

  // Default destructor
  ~Node() = default;
  
  // Parameterised Constructor 
  Node(int data);
}; 
