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
Node* CreateLinkedList(int arr[],int index,int size,Node *prev){
      //base case
      if(index==size){
            return prev;
      }
      Node* temp;
      temp=new Node(arr[index]);
      temp->next=prev;
      return CreateLinkedList(arr,index+1,size,temp);
}
int main(){
      Node *head;
      head=NULL;
      int arr[]={3,4,5,6,7,8};
      head=CreateLinkedList(arr,0,6,head);

      //inserting Node in the particular Positions
      int value=30;
      int x=3;//insert position;
       Node* temp=head;
       x--;
       while(x--){
            temp=temp->next;
       }
       Node *temp2=new Node(value);
       temp2->next=temp->next;
       temp->next=temp2;

      //print the value of the linkend list
     
      while(temp!=NULL){
            cout<<temp->data<<" "<<temp->next<<endl;
            temp=temp->next;
      }

return 0;
}