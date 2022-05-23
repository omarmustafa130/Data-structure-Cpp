#include <iostream>
using namespace std;

class List
{
    private:
        typedef struct Node
        {
            int data;
            Node* next;
            Node* last;
        }* nodeptr;

        nodeptr curr;
        nodeptr head;
        nodeptr temp;

    public:
        List();
        void append(int d);
        void delete_data (int d);
        void print_list();
        void insert(int p, int d);
        void push_front(int d);
        void delete_by_position(int p);
        int get_element(int p);

};
