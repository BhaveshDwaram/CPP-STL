#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string>&m)
{
    cout<<"Size of map is : "<<m.size()<<endl;
    for(auto &value :m)
    cout<<value.first<<" "<<value.second<<endl;
}
int main()
{
/* Unordered maps are different from ordered maps in 3 ways
1.Inbuilt Implementation :-  unordered maps are implemented internally based on hash tables rather than red black treee
2.Time Complexity :- O(1) for unordered maps where as O(n) for ordered maps .
Because ordered maps should follow particular orer
3.Valid keys Datatype :- In ordered maps keys can be any complex data types too like(pair of int ,vector of pair)
    but in unordered maps we cant use the complex data types as their  internal implementation  
    is hash tables which doesnt support complex data types
*/
 unordered_map<int,string>m;
    m[1]={"abc"};
    m[2]={"def"};
    m[3]={"ghi"};
    m.insert({4,"jkl"});
    print(m);   
     auto it = m.find(3);
     if(it==m.end())
     cout<<"The Value doesnt exist "<<endl;
     else
     cout<<"The value is : " << (*it).second<<endl;
     m.erase(3);// This will erase the value over the given location we can give iterator also as input
     print(m);
     auto it2=m.find(4);
     m.erase(it2);
     print(m);
     m.clear();//clears entire map
     print(m);

    return 0;
}
