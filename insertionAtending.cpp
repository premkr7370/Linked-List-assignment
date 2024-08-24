#include<iostream>
using namespace std;
class Node{
      public:
      int data;
      Node*next;
      Node*prev;
      Node(int value){
            data = value;
            next=prev=NULL;
      }

};
int main(){
      Node*head=NULL;
      //insert at the start
      //linkedlist doesn't exist
      if(head==NULL){
            head=new Node(5);
      }
      //already exist
      // else{
      //       Node*temp=new Node(5);
      //       temp->next=head;
      //       head->prev=temp;
      //       head=temp;
      // }
      //insert at the end
      //linkedlist doesn't exist
      Node *curr=head;
      while(curr->next!=NULL){
            curr=curr->next;
      }
      Node*temp=new Node(5);
      curr->next=temp;
      temp->prev=curr;
      Node*trav=head;
      while(trav){
            cout<<trav->data<<" ";
            trav=trav->next;

      }

return 0;
}