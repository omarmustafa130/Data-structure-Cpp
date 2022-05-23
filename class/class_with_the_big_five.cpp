#include <iostream>
#include <string.h>
#include <ostream>

//#define Copy_constructor_shallow
//#define Copy_constructor_deep
#define no_copy_constructor_default
#define deconstructor
//#define move_constructor

using namespace std;


class String
{
    private:
        char* m_buffer;
        unsigned int m_size;

    public:

        String (const char* string)
        {
            m_size = strlen(string);
            cout<<"Allocating new memory\n";
            m_buffer = new char [m_size+1];
            for (int i =0; i<m_size; i++)
            {
                m_buffer[i]=string[i];
            }
        }




#ifdef Copy_constructor_shallow
//Copy_constructor - shallow copy
        String(const String& other)
        :m_size(other.m_size), m_buffer(other.m_buffer)
        {cout<<"Copied\n";}
#endif




//Copy_constructor - deep copy
#ifdef Copy_constructor_deep
        String(const String& other)
        :m_size(other.m_size)
        {
            cout<<"Allocating new memory\n";
            m_buffer = new char [m_size + 1];
            for (int i =0; i<m_size; i++)
            {
                m_buffer[i]=other.m_buffer[i];
            }
        }
#endif

#ifdef move_constructor
        String(String&& other)
        :m_size(other.m_size)
        {
            cout<<"Moved\n";
            m_buffer = other.m_buffer;
            for (int i =0; i<m_size; i++)
            {
                m_buffer[i]=other.m_buffer[i];
            }
            other.m_size = 0;
            other.m_buffer = nullptr;
        }
#endif


//no copy constructor - use default
#ifdef no_copy_constructor_default
        String(const String& other) = default;
#endif


//Deconstructor
#ifdef deconstructor
        ~String()
        {
            if (m_buffer == nullptr)
                cout<<"NULL";
            else
                cout<<m_buffer;
            cout<<" Destroyed\n";
            delete m_buffer;
        }
#endif
        void print_string()
        {
            cout<<"printing "<<m_buffer<<endl;
        }

        char& operator[] (unsigned int index)
        {
            return m_buffer[index];
        }
};

int main()
{
    String first("charno");
    String second((String&)first);
    second[2] = 'e';
//    first.print_string();
    second.print_string();
    return 0;
}
