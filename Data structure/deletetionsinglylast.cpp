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
     ptr->next=nullptr;
}

 int main (){
    Node *head= new Node(20);
    Node *second= new Node(30);
    Node *third = new Node(40);

    head->next=second;
    second->next=third;
    head->next=second;
    second->next=nullptr;
 
    Deletrelast(second);
    transvaal(head);
    return 0;

 }