#include <iostream>

#include "List.h"

using namespace std;
int main()
{
    List l1;
    l1.append(1);
    l1.append(2);
    l1.append(3);
    l1.append(4);
    l1.append(5);
    l1.append(6);
    l1.print_list();
    l1.insert(0, 0);
    l1.print_list();
    l1.push_front(99);
    l1.print_list();
    l1.delete_by_position(7);
    l1.print_list();
    cout<<endl<<l1.get_element(7);


}
