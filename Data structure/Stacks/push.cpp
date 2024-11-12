    #include<iostream>
     using namespace std;
    
    class Node{
        public:
        int data;
        Node *next;

        Node(int val):data(val),next(nullptr){}
        
    };
     class stack{
        private:
        Node *top;

        public:
        stack():top(nullptr){}

        void push(int data){
            Node *newNode= new Node(data);
            if (top==nullptr)
            {
                top=newNode;
                return;
            }
        newNode->next=top;
        top=newNode;    
        }
    void pop(){
        Node *temp=top;
        top=top->next;
        cout<<temp->data<<" ";
        delete temp;

    }
    void traversaal(){
    Node *current=top;
    while(current!=nullptr){
        cout<<current->data;
        current=current->next;
    }
    cout<<endl;
    }   
    };

    int main(){
        stack st;

        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(50);
        st.push(60);

        st.traversaal();
    
        st.pop();
        st.traversaal();
    return 0;
    }
