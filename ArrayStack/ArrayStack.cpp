#include <iostream>
using namespace std;

template <typename E>
class ArrayStack
{
    enum {DEF_CAPACITY = 100};
    public:
        ArrayStack(int cap = DEF_CAPACITY);
        int size() const;
        bool empty() const;
        const E& top();
        void push(const E& e);
        void pop();
    private:
        int capacity;
        int t;          //index of the top element of the stack
        E* S;
};


template <typename E> ArrayStack<E>::ArrayStack(int cap):S(new E[cap]), t(-1), capacity(cap)
{ }

template <typename E> int ArrayStack<E>::size() const
{return (t+1);}


template <typename E> bool ArrayStack<E>::empty() const
{return (t==-1);}

template <typename E> const E& ArrayStack<E>::top()
{
    try
    {
        if (t==-1)
            throw ("Stack is empty!");
        return S[t];
    }
    catch (const char* c)
    {
        cout<<c<<endl;
    }
    return 0;
}

template <typename E> void ArrayStack<E>::push(const E& e)
{
    try
    {
        if (t==size())
            throw ("Stack is full!");
        S[++t] = e;
    }
    catch (const char* c)
    {
        cout<<c<<endl;
    }
    return;
}

template <typename E> void ArrayStack<E>::pop()
{
    try
    {
        if (t==-1)
            throw ("Stack is empty!");
        --t;
    }
    catch (const char* c)
    {
        cout<<c<<endl;
    }
    return;
}





int main()
{
    ArrayStack<int>my_stack;
    my_stack.pop();
    cout<<"the stack size: "<<my_stack.size()<<endl;
    cout<<"is the stack empty? "<<my_stack.empty()<<endl;
    my_stack.push(12);
    my_stack.push(134);
    cout<<"the stack size: "<<my_stack.size()<<endl;
    cout<<"is the stack empty? "<<my_stack.empty()<<endl;
    cout<<my_stack.top()<<endl;
    my_stack.pop();
    cout<<my_stack.top()<<endl;
    cout<<"\n\n\n";
    ArrayStack<int> A;
    A.push(7);
    A.push(13);
    cout << A.top() << endl; A.pop();
    A.push(9);
    cout << A.top() << endl;
    cout << A.top() << endl; A.pop();
    ArrayStack<string> B(10);
    B.push("Bob");
    B.push("Alice");
    cout << B.top() << endl;
    B.pop();
    B.push("Eve");
    cout << B.top() << endl;

    return 0;

}
