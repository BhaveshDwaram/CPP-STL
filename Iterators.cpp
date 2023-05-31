#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*Iterators are similar to pointers .they point to the elments of containers
     and then   help us to iterate through the elements of containers*/
     vector<int>v={2,3,5,6,7};
        for(int i=0;i<v.size();++i)
        cout<<v[i]<<" ";
        cout<<endl;
        vector<int> ::iterator it=v.begin();/*This is the format to declare the iterator
         and here 'it ' is the iterator and it is pointing to the first element 
         and through this we can iterate to other elements */
        cout<< *(it)<<" is the 1st element"<<endl;
        cout<< (*(it+1)) << " is the 2nd element"<<endl;
        /* it+1 and ++it or it++ has a difference .In the 1st case we are going to the next memory location 
        but in second case the pointer starts to point towards next element of container
        Here the vectror is sequntial and continuous but in case of non continuous i+1 may lead to errors so 
        its better to use ++i or i++ */
        cout<<"Iterating with in the vector"<<endl;
        for(it=v.begin();it!=v.end();++it)
        cout<< *(it) <<" ";
        cout<<endl;
        vector<pair<int,int>>v_p={{1,2},{3,4},{5,6}};
        vector<pair<int,int>> :: iterator et;
        cout<<"The elements of pair are :"<<endl;
        for(et=v_p.begin();et!=v_p.end();++et)
        cout<< (et->first)<<" "<<(et->second)<<endl;
        /* or  we can write
         cout<< *(et).first<<" "<<(et).second<<endl;
        */
    return 0;
}