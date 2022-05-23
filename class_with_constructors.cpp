#include <iostream>

using namespace std;

class IntCell
{
    private:
        int storedValue;

    public:
/*        IntCell()
        {
            storedValue = 0;
        }
/*
        IntCell(int initialValue )
        {
            storedValue = initialValue;
        }
*/
        explicit IntCell (int initialValue ) : storedValue(initialValue){}
        IntCell () : storedValue(0){}

        int read()
        {
            return storedValue;
        }
        void write(int x)
        {
            storedValue = x;
        }
};
int main()
{
    IntCell c1;
    cout<<c1.read();
    c1.write(8888);
    cout<<endl<<c1.read();
    return 0;
}
