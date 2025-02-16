#include<iostream>
using namespace std;



int main(){

    int size;
    int *ptr;
    cout<<"Enter the Size of the Array"<<endl;
    cin>>size;

    ptr=new int[size];

    cout<<"Enter the Value Want to Store in the Array"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>ptr[i];
    }

    cout<<"The Values which Stored in Array are :"<<endl;

    for (int i = 0; i <size; i++)
    {
        cout<<ptr[i]<<" ";

        
    }
    
    
    

    return 0;
}