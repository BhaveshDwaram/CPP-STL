#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<pair<int,int>>&v2)
{
    cout<<"Size is : "<<v2.size()<<endl;
    for(int i=0;i<v2.size();++i)
    {
        cout<<v2[i].first<<" "<<v2[i].second<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<pair<int,int>> v;
    //v={{1,2},{3,4},{5,6}}; you can use this for initilization
    char ch;
    int x,y;
    do
    {
        cout<<"Enter the elements"<<endl;
        cin>>x>>y;
        v.push_back({x,y});// v.push_back(make_pair(x,y));alternate method
        print_vector(v);
        cout<<"Do you want to enter more ?(1/0)"<<endl;
        cin>>ch;
    }while(ch=='1');
    return 0;
}