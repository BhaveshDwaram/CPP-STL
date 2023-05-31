#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
     auto it =v.begin(); 
      /*Auto operator helps us to determine data type of variable by the value you assigned to it
     here this auto operator helps us to shorten this :- vector<int> :: iterator it=v.begin();*/ 
     for(int value :v){  
         /*Here this is called range based loop and helps us to reduce the normal for loop used in iterators
      for(it=v.begin();it!=v.end();++it)*/
        cout<<value<<" ";
     }
     cout<<endl;
     /* Also here values are just copies from the container v and any change made in the value doesnt affect the vector v. 
     For that we havee to use vector */
     for(int value :v){
        value++;
     }
     
     for(int value :v)
     cout<<value<<" ";
     cout<<endl;/*here we observe even incrementing the value in previous casse
      it doesnt affect the values of the vector as value stores copy of the vector only */

      for(int &value :v){
        value++;
     }

      for(int value :v)
     cout<<value<<" ";
     cout<<endl;/*so this time previously value was used as refernce 
     hence any changes made to it are made to actiual value of a vector*/

     // by combinding auto operator and range based loops we can decrease the length of code a lot
     vector<int>v2={6,8,9};
     for(auto value :v2)
     cout<<value<<" ";
     cout<<endl;
     //same can be applied for pairs

     vector<pair<int,int>>p={{1,2},{3,4},{5,6}};
     for(auto value :p){
        cout<<value.first<<" "<<value.second<<endl;
     }

    return 0;
}