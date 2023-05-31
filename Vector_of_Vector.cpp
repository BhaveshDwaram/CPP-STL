#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<int> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> v;
    int x, y, z;
    cout << "Enter the no.of rows and columns  of vector of vector : " << endl;
    cin >> x >> y;
    // alternate method
    /*
    for(int i=0;i<x;++i)
   {
       cout<<"Enter the elements to be inserted in the row "<<x<<" "<<endl;
       v.push_back(vector<int>());
       for(int j=0;j<y;++j)
       {
           cin>>z;
           v[i].push_back(z);
       }

   }
   */
    for (int i = 0; i < x; ++i)
    {
        cout << "Enter the elements to be inserted in the row " << x << " " << endl;
        vector<int> temp;
        for (int j = 0; j < y; ++j)
        {
            cin >> z;
            temp.push_back(z);
        }
        v.push_back(temp);
    }
    cout << "The array is : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        print_vector(v[i]);
    }
    return 0;
}