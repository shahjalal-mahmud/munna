#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};
class stack
{
private:
    Node *top;

public:
    stack() : top(nullptr) {}

    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }
    void pop()
    {
        top = top->next;
    }
    void traversaal()
    {
        Node *temp = top;
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
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.traversaal();

    st.pop();
    st.traversaal();
    return 0;
}
