#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int>&v2)
{
    //cout<<"Size is : "<<v2.size()<<endl;
    for(int i=0;i<v2.size();++i)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int x,y,z;
    cout<<"Enter the size of array of vectors:"<<endl;
    cin>>x;
    cout<<"Enter the size of each vector :"<<endl;
    cin>>y;
    vector<int>v[x];
    for(int i=0;i<x;++i)
    {
        cout<<"Enter the "<<y<<" "<<" elements to be inserted in the vector"<<endl;
        for(int j=0;j<y;++j)
        {
            
            cin>>z;
            v[i].push_back(z);
        }
    }
    cout<<"The entire array of vector is :"<<endl;
    for(int i=0;i<x;i++)
    {
         print_vector(v[i]);
    }

    return 0;
}