#include <iostream>
#include <string>
using namespace std;
class Node{
public:
  int data;
  Node* next;
   Node(int val){
    data=val;
    next=NULL;
   }
}; 

 class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }

    }

    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            tail->next=newNode;
            tail=newNode;
        }

    }
    void pop_front(){
        if(head==NULL){
            cout<<"Linked List is empty";
            return;
        }
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
          
            delete temp;

           }



   void pop_back(){
        if(head==NULL){
            cout<<"Linked List is empty";
            return;
        }
            Node* temp=head;
            while(temp->next!=tail){
 temp=temp->next;
            }
            temp->next=NULL;          
            delete tail;
            tail=temp;

           }
           
            
    void printList(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void insert(int val,int pos){
 if(pos<0){
    cout<<"Invalid Position\n";
    return;
 }
 if(pos == 0){
    push_front(val);
    return;
 }
Node* temp=head;
for(int i=0;i<pos-1;i++){
    if(temp==NULL){
 cout<<"Invalid Position\n";
 return;
    }
    temp=temp->next;
}

Node* newNode=new Node(val);
newNode->next=temp->next;
temp->next=newNode;
    }

    int search(int key){
        Node* temp=head;
        int indx=0;
while(temp!=NULL){
    if(temp->data==key) {
        return indx;
    }
    temp=temp->next;
    indx++;
}
return -1;

    }

 };



int main() {
            List Ll;
           
            Ll.push_front(1);
            Ll.push_front(2);
            Ll.push_front(3);
            Ll.insert(4,1);
            Ll.printList();

cout<<"Value HA "<<Ll.search(8)<<endl;
    return 0;
}