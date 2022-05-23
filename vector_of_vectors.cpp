#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <vector<int>> matrix;
    //fill the inner vector then insert it into the bigger vector
    for (int i=0; i<3; i++)
    {
        vector<int> rows;
        for (int j =0; j<5; j++)
        {
            rows.push_back(j);
            cout<<rows[j];
        }
        matrix.push_back(rows);
        cout<<endl;
    }

    for (int i = 0; i<matrix.size(); i++)
    {
        for (int j =0; j<matrix[i].size(); j++)
        cout<<matrix[i][j];
        cout<<endl;
    }
}
