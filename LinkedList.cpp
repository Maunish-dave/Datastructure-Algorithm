#include <iostream>
#include <conio.h>
using namespace std;

struct Node {
   char data;
   Node * next;
};

class LinkedList{
   private:
       Node *head, *tail;
   public:
    LinkedList(){
       head = NULL;
       tail = NULL;
    }
    add_node(char data){
        Node *temp;
        temp = head;
        Node *newnode = new Node;
        newnode->data = data;
        newnode->next = NULL;

        if(head == NULL){
             head = newnode;
             tail = newnode;
        }

        else{
           tail->next = newnode;
           tail=tail->next;
        }
    }

    display(){
       Node *temp;
       temp = head;
       while(temp != NULL){
          cout << temp->data;
        temp=temp->next;
       }
       cout << endl;
    }
};

int main(){
   LinkedList l1;
   l1.add_node('a');
      l1.add_node('b');
   l1.add_node('c');
   l1.add_node('d');
   l1.add_node('e');
   l1.display();

}
