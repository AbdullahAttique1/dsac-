#include <iostream>
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

class CirculaList{
    public:
    Node* head;
    Node* tail;
    CirculaList(){
        head=tail=NULL;
    }
    void insertAtHead(int val){
        Node* newNode=new Node(val);
        if(head== NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }

    }


   void insertAtTail(int val){
        Node* newNode=new Node(val);
        if(head== NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
           
        }

    }

    void showList(){
        if(head==NULL) return;
        cout<<head->data;
        Node* temp=head->next;
        while(temp !=head){
            cout<<temp->data;
            temp=temp->next;
        }
cout<<temp->data;

    }
    void  deletAtHead(){
        if(head==NULL){
            return;
        }else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
            temp->next=NULL;
          delete temp;
        }

    }
    void deletAtTail(){
        if(head==NULL){
            return;
        }else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* temp=tail;
            Node* prev=head;
            while(prev->next != tail){
                prev=prev->next;
            }
            tail=prev;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }
};
int main() {
    CirculaList c1;
    c1.insertAtHead(1);
    c1.insertAtHead(2);
    c1.insertAtHead(3);
    // c1.deletAtHead();
    c1.deletAtTail();
    c1.showList();
            
    return 0;
}