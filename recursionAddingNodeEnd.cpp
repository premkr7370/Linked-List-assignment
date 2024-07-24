#include<iostream>
using namespace std;
class Node{
      public:
      int data;
      Node* next;

      Node(int value){
            data=value;
            next=NULL;
      }
};
Node* CreateLinkedList(int arr[],int index,int size){
      //base case
      if(index==size){
            return NULL;
      }
      Node* temp;
      temp=new Node(arr[index]);
      temp->next=CreateLinkedList(arr,index+1,size);

      return temp;
}
int main(){
      Node *head;
      head=NULL;
      int arr[]={1,2,3,4,5,6,7,8};
      head=CreateLinkedList(arr,0,8);

      //print the value linkedList
      Node* temp=head;
      while(temp!=NULL){
            cout<<temp->data<<" "<<temp->next<<endl;
            temp=temp->next;
      }

return 0;
}