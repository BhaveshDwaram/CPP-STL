#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>&v)
{
    cout<<"Size is :"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
//vector<int>v(5);// Vectors are simply dynamic arrays .
vector<int>v;
int input;
char ch;
do
{
cout<<"Enter the element "<<endl;
cin>>input;
v.push_back(input);
printvector(v);
cout<<"Do you want to enter more ?(1/0)"<<endl;
cin>>ch;
} while (ch=='1');
//Also v.pop_back() can be used to delete last elment from vector v
    
    return 0;
}