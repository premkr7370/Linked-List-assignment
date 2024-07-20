#include<iostream>
using namespace std;
class Node{
      public:
      int data; //data type of the data is stores in the node
      Node* next; // pointer of the next node
      Node(int value){ // conctuctor of the class
            data=value; // value of the data
            next=NULL; // address of the next node
      }
};
int main(){
      Node* head=new Node(23);// new node is created

return 0;
}