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
    cout<<endl;
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
    
    Node *newNode= new Node(50);
    Node *temp=head;

    // while(temp->next!=nullptr){
    //     temp=temp->next;
    // }
    // temp->next=newNode;
    // third->next=newNode;
    // // newNode->next=nullptr;
    // transvaal(head);

    // case-1=> delete the head
    DeletreHead(head);
    // head = head->next;
    transvaal(head);

    // // // Case-2=> Delete the Tail
    // // second->next = nullptr;
    // // transvaal(head);

    // // Case-3=> Delte the specofoc Node (30)
    // head->next = third;
    // transvaal(head);

    return 0;

 }