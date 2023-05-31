#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///////////////////pairs//////////////
    /*pair<int,string> p,p1;
    p1 =make_pair(2,"Bhavesh");
   p={1,"abc"};
   cout<<"Before swaping p is :"<<p.first<<" "<<p.second<<endl<<"And p1 is :"<<p1.first<<" "<<p1.second<<endl;
   swap(p,p1);
    cout<<"After swaping p is :"<<p.first<<" "<<p.second<<endl<<"And p1 is :"<<p1.first<<" "<<p1.second<<endl;
    */
   //////////////////////////////////////pairs with arrays//////////////////
   /*int a[]={1,2,3};
   int b[]={4,5,6};
   pair<int,int>p[3];//here p is an integer array of 3 pairs
    p[0]={1,4};
    p[1]={2,5};
   cout<<"Enter the 3 value of array p"<<endl;
   cin>>p[2].first>>p[2].second;
   cout<<"Before swaping :"<<endl;
   for(int i=0;i<3;i++)
   {
    cout<<p[i].first<<" "<<p[i].second<<endl;
   }
   swap(p[0],p[2]);
    cout<<"After swaping :"<<endl;
   for(int i=0;i<3;i++)
   {
    cout<<p[i].first<<" "<<p[i].second<<endl;
   }*/
///////////////////////refrencing in pairs ////////////////////////////
   pair<int,int>p;
   cin>>p.first>>p.second;
   pair<int,int>&p1=p;//initializing a reference variable
   cout<<"The values of normal pair is : "<<p.first<<" "<<p.second<<endl<<"The values of referenced pair is : "<<p1.first<<" "<<p1.second<<endl;
    return 0;
}