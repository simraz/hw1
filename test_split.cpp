/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/
#include <iostream>
#include "split.h"

int main(int argc, char* argv[])
{
  Node* val = new Node{1, nullptr};
  Node* val2 = new Node{2, nullptr};
  Node* val3 = new Node{3, nullptr};
  Node* val4 = new Node{4, nullptr};

  //linked list
  val->next = val2;
  val2->next = val3;
  val3->next = val4;

  Node* evens = nullptr;
  Node* odds = nullptr;

  split(val, evens, odds);

  std::cout << "odds";
  Node* temp = odds;
  while (temp != nullptr) {
    std::cout << temp->value << "";
    temp = temp->next;
  }
  //clean up 
  while (odds != nullptr) {
    temp = odds;
    odds = temp->next;
    delete temp;
  }
  while (evens != nullptr) {
    temp = evens;
    evens = temp->next;
    delete temp;
  }

} 
