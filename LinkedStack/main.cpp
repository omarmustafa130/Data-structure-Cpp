#include <iostream>
#include "List.h"
using namespace std;


template <typename E>
class LinkedStack : public List
{
    public:
        LinkedStack();
        int size() const;
        bool empty() const;
        const E& top();
        void push(const E& e);
        void pop();
    private:
        int n;          //number of elements
        List S;
};


template <typename E> LinkedStack<E>::LinkedStack():S(), n(0)
{ }

template <typename E> int LinkedStack<E>::size() const
{return (n);}


template <typename E> bool LinkedStack<E>::empty() const
{return (n==0);}

template <typename E> const E& LinkedStack<E>::top()
{
    try
    {
        if (empty())
            throw ("Stack is empty!");
        return get_element(0);
    }
    catch (const char* c)
    {
        cout<<c<<endl;
    }
    return 0;
}

template <typename E> void LinkedStack<E>::push(const E& e)
{
    ++n;
    push_front(e);
}

template <typename E> void LinkedStack<E>::pop()
{
    try
    {
        if (empty())
            throw ("Stack is empty!");
        --n;
        delete_by_position(0);
    }
    catch (const char* c)
    {
        cout<<c<<endl;
    }
    return;
}



int main()
{
    LinkedStack<int>my_stack;
    my_stack.pop();
    cout<<"the stack size: "<<my_stack.size()<<endl;
    cout<<"is the stack empty? "<<my_stack.empty()<<endl;
    my_stack.push(12);
    my_stack.push(134);
    my_stack.print_list();
    my_stack.pop();
    my_stack.print_list();

}
