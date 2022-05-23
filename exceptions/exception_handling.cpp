#include <iostream>

using namespace std;

int main()
{
    int x,y, final_value;
    while (1)
    {
        cout<<"performing division..."<<endl;
        cout<<"Please enter x and y values"<<endl;
        cin>>x>>y;
        try
        {
            if (y == 0)
                //throw exception();
                throw("you can't divise an integer over zero!");
            final_value = x/y;
            cout<<"the final value is: "<<final_value<<endl;
        }
        catch(const char* c)
        {
            cout<<c<<endl;
            cout<<"please review your inputs"<<endl;
        }

        cout << "\nThe program continued" << endl;
        cout << "Now performing addition..."<<endl;
        final_value = x+y;
        cout<<"the final value is: "<<final_value<<endl;;
    }
}
