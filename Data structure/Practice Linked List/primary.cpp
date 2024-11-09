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
    void delete_Head(){
        head = head->next;
    }
    void delete_end(){
        Node *t1 = head;
        Node *t2 = head->next;
        while (t2->next!=nullptr)
        {
            t2 = t2->next;
            t1 = t1->next;
        }
        t1->next = nullptr;
    }
    void delete_node(int target){
        if (head->data == target)
        {
            delete_Head();
            return;
        }
        
        Node *t1 = head;
        Node *t2 = head->next;
        while (t2->data!=target)
        {
            t2 = t2->next;
            t1 = t1->next;
        }
        t1->next = t2->next;
    }
};

int main()
{
    Linkedlist list;
    list.insert_At_Head(18);
    list.insert_At_Head(16);
    list.insert_At_Head(14);
    list.insert_At_Head(12);
    list.insert_At_Head(10);
    list.insert_At_Head(8);
    list.insert_At_Head(6);

    list.Display();

    
    list.delete_node(6);
    list.Display();
    return 0;
}