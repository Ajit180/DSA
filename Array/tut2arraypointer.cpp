#include<iostream>
using namespace std;

int main(){

    int a[5]={13,34,53,34,53};
     
    int*ptr[5];
     for (int i = 0; i < 5; i++)
     {
        /* code */
        ptr[i]=&a[i];
     }

     for (int i = 0; i < 5; i++)
     {
        /* code */
        cout<<*ptr[i]<<" ";
     }
     

     

}