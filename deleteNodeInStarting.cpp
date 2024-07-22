#include<iostream>
using namespace std;
class Node{
      public:
      int data;
      Node * next;

      Node(int value){
            data=value;
            next=NULL;
      }
};
Node *createLinkedList(int arr[],int index,int size){
      if(index==size){
            return NULL;
      }
      Node *temp= new Node(arr[index]);
      temp->next=createLinkedList(arr,index+1,size);
      return temp;

}

int main(){
      Node *head;
      head=NULL;
      int arr[]={1,2,3,4,5,6};
      head=createLinkedList(arr,0,6);// linked is create here 

      // delete the node at start
      
      if(head!=NULL){
            Node *temp=head;
            head=head->next;
            delete temp;

      
      }

      //print the linked list
      Node* temp=head;
      while(temp){
            cout<<temp->data<<"-> "<<temp->next<<endl;
            temp=temp->next;
      }
      


return 0;
}