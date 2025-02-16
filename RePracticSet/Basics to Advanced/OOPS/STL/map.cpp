#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // map<int,string> mp;

    // mp[1]="one";
    // mp[2]="two";
    // // mp[2]="again two";
    // mp[3]="three";

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The Value stored the maps are :"<<i<<mp[i]<<endl;
    // }
     
    //  cout<<mp.size();



  //Unordered Map
  unordered_map<int,string>fruits;
  fruits[1]="Apple";
  fruits[2]="Banana";
  fruits[3]="Gavava";

   for (const auto &pair:fruits){
       cout<<pair.first<<" -> "<<pair.second;
   }
   
   
  
    return 0;
}