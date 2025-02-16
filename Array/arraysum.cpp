#include<iostream>
using namespace std;

 void sum(int num[],int n){

    int sumnumber=0;
    
       for (int i = 0; i < n; i++)
       {
        /* code */

         sumnumber = sumnumber + num[i];

       }
       
       cout<<"The sum of Array is: "<<sumnumber;
      
 }

int main(){

    int num[100], size;
    cout<<"Enter the Size of Array"<<endl;
    cin>>size;
    cout<<"Enter the Array Numbers:"<<endl;


    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>num[i];
    }

    sum(num,size);
    

    return 0;
}