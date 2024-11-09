#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

class Linkedlist{
private:
    Node *head;
public:
    Linkedlist(): head(nullptr){}
    void Display(){
        Node *current = head;
        while (current!=nullptr)
        {
            cout<<current->data<<" ";
            current = current->next;
        }
        cout<<endl;
    }
    void insert_At_Head(int data){
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void insert_At_End(int data){
        Node *newNode = new Node(data);
        Node *current = head;
        while (current->next !=nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }

};
// void Traverse(Node *ptr){
//     while (ptr!= nullptr)
//     {
//         cout<<ptr->data<<" ";
//         ptr = ptr->next;
//     }
//     cout<<endl;
// }
int main()
{
    Linkedlist list;

    list.insert_At_Head(18);
    list.insert_At_Head(16);
    list.insert_At_Head(14);
    list.insert_At_Head(12);

    list.Display();

    list.insert_At_Head(9);
    list.Display();

    list.insert_At_End(20);
    list.Display();


    // Node *head = new Node(12);
    // Node *q = new Node(14);
    // Node *r = new Node(16);
    // Node *t = new Node(18);

    // head->next = q;
    // q->next = r;
    // r->next = t;

    // Traverse(head);
    return 0;
}