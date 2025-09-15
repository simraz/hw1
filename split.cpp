/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"

/* Add a prototype for a helper function here if you need */

void split(Node*& in, Node*& odds, Node*& evens)
{
//base case
  if (in == nullptr) {
    return;
  }
    Node* temp = in; 
    Node* nextValueNode = in->next;
    temp->next = nullptr;
    in = nextValueNode;
    //recursion
    split(in, odds, evens);

//odd and even checks
  if (temp->value %  2 == 0) {
    addNode(evens, temp);
  }
  else {
    addNode(odds, temp);
  }
}

/* If you needed a helper function, write it here */
//adds new node to the end of the new split lists
void addNode(Node*& list, Node* node) {
  if (list == nullptr) {
    list = node;
  }
  else {
    //starts at new list
    addNode(list->next, node); 
  }
}