#include<iostream>
 using namespace std;

 class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int val):data(val),next(nullptr),prev(nullptr){}
 };

 void transvaal( Node *ptr){
    while(ptr!=nullptr){
        cout<< ptr->data<<"  ";
        ptr=ptr->next;

    }
 }



 int main (){
    Node *head= new Node(20);
    Node *second= new Node(30);
    Node *third = new Node(40);

    head->next=second;
    second->next=third;
    third->prev=second;
    second->prev=head;

    Node *newNode=new Node(50);
    third->next=newNode;
    
    transvaal(head);

    return 0;

 }