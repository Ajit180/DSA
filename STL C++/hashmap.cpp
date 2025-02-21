#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
     
    unordered_map<string,int>mymap;
    mymap["apple"]=100;
    mymap["banana"]=50;
    mymap["cherry"]=75;


    //access value
    cout<<"Apple Price =>"<<mymap["apple"]<<endl;
}
