#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;


int main(){

    map<string,int>m; // if i use  unordered_map then number sequence will be in the sequence.
    
    

    //Insertion Method 1
    pair<string,int>p=make_pair("Ajit",45);
    m.insert(p);

    //method 2
    pair<string,int>pair2("Mohit Sharma",13);
    m.insert(pair2);

    //method 3
    m["mera"]=46;
    //here what happens 
    m["mera"]=2; //overwrite value of mera from 46 to 2


    //Search
    cout<<m["mera"]<<endl;
    cout<<m.at("Ajit")<<endl;
    cout<<m["unknown"]<<endl;
    cout<<m.at("unknown")<<endl;
    cout<<m["This"]<<endl;


    //size
    cout<<m.size()<<endl;

    //Check the Presence
    cout<<m.count("Ajit")<<endl;

    //Erase Function
     m.erase("Ajit");
    cout<<m.size()<<endl;

    //Itrator

    // map<string,int>::iterator it = m.begin();//initaiziation m.begin()

    // while (it!=m.end())
    // {
    //     cout<<it->first<<"  "<<it->second<<endl;
    //     it++;
    // }

    for (auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }
    


    
  unordered_map<int,int>nums_map;

    nums_map[2]=0;
    nums_map[7]=1;
    nums_map[2]=3;
     for (auto it=nums_map.begin();it!=nums_map.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }
    


    return 0;
}