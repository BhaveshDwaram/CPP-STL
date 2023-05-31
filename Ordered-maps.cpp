#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m)
{
    cout<<"Size of map is : "<<m.size()<<endl;
    for(auto &value :m)
    cout<<value.first<<" "<<value.second<<endl;
}

int main()
{
    /* Map has 2 elemnts key and value. mapping is created between key and value
      Normal ordered maps store keys in a sorted manner and these maps are non continuous and
      Maps are internally based on RED BLACK TREE DATASTRUCTURE*/
    map<int,string>m;
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
     /* The time complexity of map depends on data type of key also*/
    return 0;
}