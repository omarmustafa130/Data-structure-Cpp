#include <iostream>
#include "List.h"
using namespace std;


List::List()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
}


void List::append(int d)
{

    nodeptr n = new Node;
    n->next = nullptr;
    n->data = d;

    if (head!=NULL)
    {
        curr = head;
        while (curr->next != nullptr)
            curr = curr->next;
        curr->next = n;
    }
    else
        head = n;
}

void List::delete_data(int d)
{
    nodeptr delptr;
    nodeptr temp;

    curr = head;
    if (curr == NULL)
    {
        cout<<"\nThe list is empty"<<endl;
        return;
    }

    while (curr!= NULL && curr->data != d)
    {
        temp = curr;
        curr= curr->next;
    }

    if (curr == NULL)
    {
        cout<<"\nThe list does not contatin the data you provided!"<<endl;
        return;
    }

    cout<<"\nwe found the data you want to delete!"<<endl;
    delptr = curr;
    curr = curr->next;
    temp->next = curr;
    delete delptr;
    cout<<"\ndata deleted successfully!"<<endl;
}

void List::print_list()
{
    curr = head;
    if (curr == NULL)
    {
        cout<<"\nList is empty"<<endl;
        return;
    }

    while (curr!= NULL)
    {
        cout<<curr->data<<"  ";
        curr= curr->next;
    }
    cout<<endl;
}
void List::insert(int p, int d)
{
    nodeptr temp;
    nodeptr n = new Node;
    n->data = d;
    curr = head;
    if (curr == NULL)
    {
        cout<<"\nList is empty"<<endl;
        return;
    }

    for (int i=0; i<p; i++)
    {
        if (curr->next == NULL)
        {
            cout<<"\nThe list does not contatin the position you provided!"<<endl;
            return;
        }
        temp = curr;
        curr = curr->next;
    }
    if (p == 0)
    {
        n->next = curr;
        head = n;
        return;
    }
    temp->next = n;
    n->next = curr;

}

void List::push_front(int d)
{
    nodeptr n = new Node;
    n->data = d;
    curr = head;
    n->next = curr;
    head = n;
}

void List::delete_by_position(int p)
{
    nodeptr delptr;
    nodeptr temp;
    curr = head;

    if (curr == NULL)
    {
        cout<<"\nList is empty"<<endl;
        return;
    }

    for (int i=0; i<p; i++)
    {
        if (curr->next == NULL)
        {
            cout<<"\nThe list does not contatin the position you provided!"<<endl;
            return;
        }
        temp = curr;
        curr = curr->next;
    }
    if (p == 0)
    {
        delptr = head;
        head = head->next;
        delete delptr;
        return;
    }

    cout<<"\nwe found the data you want to delete!"<<endl;
    delptr = curr;
    curr = curr->next;
    temp->next = curr;
    delete delptr;
    cout<<"\ndata deleted successfully!"<<endl;
}

int List::get_element(int p)
{
    curr = head;
    if (curr == NULL)
    {
        cout<<"\nList is empty"<<endl;
        return NULL;
    }
    for (int i=0; i<p; i++)
    {
        if (curr->next == NULL)
        {
            cout<<"\nThe list does not contatin the position you provided!"<<endl;
            return NULL;
        }
        curr = curr->next;
    }

    return curr->data;
}

