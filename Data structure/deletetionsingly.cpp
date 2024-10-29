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
    void DeletreHead(Node *&head){
    head = head->next;
 }

 int main (){
    Node *head= new Node(20);
    Node *second= new Node(30);
    Node *third = new Node(40);

    head->next=second;
    second->next=third;
    head->next=second;
    
    DeletreHead(head);
    transvaal(head);
    return 0;

 }