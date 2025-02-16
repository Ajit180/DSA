#include<iostream>
using namespace std;


  int add(int c,int d){

 
      return c+d;

        
     };


int main(){

    int a,b;
      cout<<"Enter the first value";
      cin>>a;
     
      cout<<"Ente the Second value";
       cin>>b;
       cout<<endl;

      cout<<"The sum is : "<<add(a,b)<<endl;

    return 0;
}