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
int main(){
      Node* Head;
      Head=NULL;
      int arr[]={3,4,6,8,3,6,3};
      for(int i=0;i<7;i++){
            if(Head==NULL){
                  Head=new Node(arr[i]);

            } // if the linked list is not created
            else{
                  Node* temp;
                  temp=new Node(arr[i]);
                  temp->next=Head;
                  Head=temp;
            } // if the linked list is present 
      }
      //print the value of the linked list
      Node* temp=Head;
      while(temp!=NULL){
            cout<<temp->data<<" "<<temp->next<<endl;
            temp=temp->next;

      }

return 0;
}