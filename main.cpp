#include <iostream>
#include <fstream>
#include "include/node-list.h"

using std::cout, std::endl, std::ifstream, std::cerr;

int main (void)
{
  Linkedlist list;

  // Read input from file
  ifstream inputFile("input.txt");
  if (!inputFile)
    {
      cerr << "Failed to open the input file." << endl;
      return 1;
    }
  int data;
  while (inputFile >> data)
    {
      list.insertNode(data);
    }
  inputFile.close();

  cout << "Elements of the list are: ";

  // Print the list
  list.printList();
  cout << endl;

  // Reverse the list
  list.reverseList();

  cout << "Elements of the reversed list are: ";
  list.printList();
  cout << endl;

  cout << "Adding element in the list" << endl;
  list.insertNode(7);
  list.printList();
  cout << endl;

  cout << "Reversing the list again" << endl;
  list.reverseList();
  list.printList();

  return 0;
}
