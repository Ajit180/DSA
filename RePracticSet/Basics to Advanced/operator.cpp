#include<iostream>
using namespace std;


int main(){

    int ageresponse;
    cout<<"Are you 18 year old or not enter 1 for the yes and or 0 for the no :";
    cin>>ageresponse;
    if (!ageresponse)
    {
         cout<<"You are undergo"<<endl; 
    }
    else{
        cout<<"You are adult"<<endl;
    }
    
    return 0;
}