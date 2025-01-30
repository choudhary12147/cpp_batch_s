#include<bits/stdc++.h>

using namespace std;

class Node{
    
    public: 
    Node *prev;
    int data;
    Node *next;

    Node(int data){
            this->data = data;
            this->prev = nullptr;
            this->next = nullptr;
       }

};

class DoubleLinkedList{
   
    Node *head;

    public: 
       DoubleLinkedList(){
          head = nullptr;
       }

      void pushbackintodll(int data){
         
         Node *newnode = new Node(data);

         if (head == nullptr)
         {
              head = newnode;
              return;
         }
         
         Node *temp = head;

         while ( temp->next != nullptr)
         {
              temp = temp->next;
         }
         
         temp->next = newnode;
         newnode->prev = temp;

      } 

};



int main(){

      DoubleLinkedList dll;

      dll.pushbackintodll(10);

    return 0;
}