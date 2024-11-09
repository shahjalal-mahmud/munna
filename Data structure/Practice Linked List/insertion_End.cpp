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
    void insert_After(int data, int target){
        Node *newNode = new Node(data);
        Node *current = head;
        while (current->data!=target)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

};

int main()
{
    Linkedlist list;
    list.insert_At_Head(10);
    list.insert_At_End(20);
    list.insert_At_End(30);
    list.insert_At_End(40);

    list.Display();

    list.insert_At_End(50);
    list.Display();

    list.insert_After(35, 30);
    list.Display();


    return 0;
}