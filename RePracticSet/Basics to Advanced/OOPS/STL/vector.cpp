#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v={45,34,5,66,74};

    v.push_back(99);
    v.push_back(100);
   

   

     v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<v.size();

     for (int i = 0; i < 8; i++)
    {
        cout<<"The value in the vector "<<i<<" "<<v[i]<<endl;
    }

    return 0;
}