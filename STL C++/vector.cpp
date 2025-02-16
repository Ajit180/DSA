#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){


    vector<int>a(5,1);
    cout<<"Printing the a value -> ";

   for (int i = 0; i <a.size(); i++)
    {
        cout<<a[i]<<"  ";
    }
      cout<<endl;


     // copy the value of a into some other variable

     vector<int>b(a);
     cout<<"Printing the copy of a to a variable->";
     for (int i = 0; i < b.size(); i++)
     {
        cout<<b[i]<<"   ";
     }
     cout<<endl;
     



    vector<int>v;
    v.push_back(45);
    v.push_back(44);
    v.push_back(34);

    
    // v.push_back(35);
    // v.push_back(90);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;



    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<v.capacity()<<endl;
    cout<<v.at(0)<<endl;
    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    cout<<"Before POP"<<endl;
    for (int i:v)
    {
       cout<<i<<"  ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After POP"<<endl;
    for (int i:v)
    {
       cout<<i<<"  ";
    }
    cout<<endl;
    

    return 0;
}