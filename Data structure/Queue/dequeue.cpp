#include <iostream>
using namespace std;

class Queue
{
private:
    class Node
    {
    public:
        int data;
        Node *next;

        Node(int val) : data(val), next(nullptr) {}
    };
    Node *front;
    Node *rare;

public:
    Queue() : front(nullptr), rare(nullptr) {}
    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (rare == nullptr)
        {
            front = rare = newNode;
            return;
        }
        rare->next = newNode;
        rare = newNode;
    }
    void dequeue(){

        front=front->next;
    }
    void traversal()
    {
        Node *temp = front;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    Queue enter;
    enter.enqueue(10);
    enter.enqueue(20);
    enter.enqueue(30);
    enter.enqueue(40);

    enter.traversal();
    enter.dequeue();
    enter.traversal();
    return 0;
}