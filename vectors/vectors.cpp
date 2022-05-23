#include <iostream>
#include <vector>
using namespace std;

vector <int> partialsum(const vector <int> & arr)
{
    vector <int> result (arr.size());
    result[0] = arr[0];
    for (int i = 1; i< arr.size()-1; i++)
        result[i] = arr[i] + result [i-1];
    return result;
}

int main()
{
   /*
    vector<int> squares (100);
    for (int i = 0; i<squares.size(); i++)
        squares[i] = i* i;
    for (int i = 0; i<squares.size(); i++)
        cout<<i<<" "<<squares[i]<<endl;
    */
    vector <int> DaysInMonth {13,12,11,13,13};
    /*
    for (auto & x : DaysInMonth)
        cout<<++x<<endl;
    */
    vector <int> res= partialsum(DaysInMonth);
    for (auto & x: res)
        cout<<x<<endl;
    return 0;
}
