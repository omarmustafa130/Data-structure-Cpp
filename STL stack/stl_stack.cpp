#include <iostream>
#include <stack>
using namespace std;
using std::stack;

int main()
{
    stack <int> my_stack;
    cout<<"the stack size: "<<my_stack.size()<<endl;
    cout<<"is the stack empty? "<<my_stack.empty()<<endl;
    my_stack.push(12);
    my_stack.push(133);
    cout<<"the stack size: "<<my_stack.size()<<endl;
    cout<<"is the stack empty? "<<my_stack.empty()<<endl;
    cout<<my_stack.top()<<endl;
    my_stack.pop();
    cout<<my_stack.top()<<endl;

}
