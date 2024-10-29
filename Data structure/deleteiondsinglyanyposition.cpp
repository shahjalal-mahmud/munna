#include<iostream>
 using namespace std;

 class Node{
    public:
    int data;
    Node *next;

    Node(int val):data(val),next(nullptr){}
 };

 void transvaal( Node *ptr){
    while(ptr!=nullptr){
        cout<< ptr->data<<" ";
        ptr=ptr->next;

    }
 }
     void Deletrelast(Node *ptr){
     ptr->next= ptr->next->next;
}

 int main (){
    Node *newNode = new Node(100);
    Node *head= new Node(20);
    Node *second= new Node(30);
    Node *third = new Node(40);

    newNode->next = head;
    head->next=second;
    second->next=third;

    // Deletrelast(second);

    // Deletrelast(head);
    transvaal(newNode);
    return 0;

 }