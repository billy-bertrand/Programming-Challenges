#include <iostream>

using namespace std;

class Node{
public:
   Node * next;
   int value;
};

class Printer{
public:
    void Print(Node * start){
        int i = 0;
        Node * current = start;
        while(current != nullptr){
            cout << "Node " << i << " has value " << current->value << endl;
            current = current->next;
            i++;
        }

        //// hash generating code has been hidden from the student ////
        
        //cout << "Secret Hash: " << hash << endl;
    }
};

int main(){

   int nodeCount;
   cin >> nodeCount;

   Node * node = new Node;
   node->value = 0;
   node->next = nullptr;

   Node * start = node;


   // your solution here
   for(int i = 1; i < nodeCount; i++){
      //create a node
      Node *currNode = new Node;
      currNode -> value = i;
      node -> next = currNode;
      node = currNode;
   }
   
   //set last node's value to nullptr
   node -> next = nullptr;


   Printer p;
   p.Print(start);

	return 0;
}