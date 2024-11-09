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

};

int main()
{
    Linkedlist list;
    list.insert_At_Head(18);
    list.insert_At_Head(16);
    list.insert_At_Head(14);
    list.insert_At_Head(12);

    list.Display();


    return 0;
}