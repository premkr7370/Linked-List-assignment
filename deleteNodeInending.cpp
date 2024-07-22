#include<iostream>
using namespace std;
class Node{
      public:
      int data;
      Node* next;
      Node(int value){
            data = value;
            next=NULL;
      }
     

};
 Node* createLinkedList(int arr[],int index,int size){
            if(index==size){
                  return NULL;
            }
            Node * temp;
            temp=new Node(arr[index]);
            temp->next=createLinkedList(arr,index+1,size);
            return temp;

      }

int main(){
      Node *head;
      head=NULL;
      int arr[]={2,4,6,78,9};
      head=createLinkedList(arr,0,5);
      // delete the node from the ending

      if(head){
            // only one node is present
            if(head->next==NULL){
                  Node *temp=head;
                  delete temp;
                  head=NULL;
            }
            // more then one node is present is present
            else{
                  Node *curr=head;
                  Node *prev=NULL;
                  //curr next id note null
                  while(curr->next!=NULL){
                        prev=curr;
                        curr=curr->next;
                        }
                        prev->next=curr->next;
                        delete curr;

            }
      }
      //printing the linked list
      Node *temp=head;
      while(head){
            cout<<head->data<<"->"<<head->next<<endl;
            head=head->next;
      }

return 0;
} 