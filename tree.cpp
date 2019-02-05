#include <iostream>

using namespace std;


struct Node
{
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

class Tree
{
private:
    int nodes;

public:
    Node *head;
    Tree(){
      head = NULL;
    }
    void tree_insert(int i);
    void preorder(Node *p);
    void inorder(Node *p);
    void postorder(Node *p);
};
void Tree::preorder(Node *p){
    Node *tr = p;
    if(tr == NULL)
        return;

   cout << tr->data << "-";
   Tree::preorder(tr->left);
   Tree::preorder(tr->right);
}
void Tree::inorder(Node *p){
    Node *tr = p;
    if(tr == NULL)
        return;
   Tree::preorder(tr->left);
      cout << tr->data << "-";
   Tree::preorder(tr->right);
}
void Tree::postorder(Node *p){
    Node *tr = p;
    if(tr == NULL)
        return;
   Tree::preorder(tr->left);
   Tree::preorder(tr->right);
      cout << tr->data << "-";

}

void Tree::tree_insert(int data)
{
    Node *n = new Node(data);
    Node *temp;
    if(head == NULL)
    {
        head = n;
        return;
    }
    bool found = false;
    temp = head;
    while(!found)
    {
        if(n->data > temp->data && temp->right != NULL)
        {
            temp = temp->right;
        }
        else if(n->data < temp->data && temp->left != NULL)
        {
            temp = temp->left;
        }
        else
        {
            found = true;
        }
    }
    if(n->data > temp->data)
    {
        temp->right = n;
    }
    else
    {
        temp->left = n;
    }

}
int main()
{
  Tree t;
  t.tree_insert(30);
  t.tree_insert(20);
  t.tree_insert(70);
  t.tree_insert(40);
  t.tree_insert(50);
  t.tree_insert(60);
  t.preorder(t.head);
  cout << endl;
  t.inorder(t.head);
  cout << endl;
  t.postorder(t.head);
}
