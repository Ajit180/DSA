#include<iostream>
using namespace std;

bool duplicateelement(int arr[],int size){

    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]==arr[j])
            {
                return true;
            }
            
        }
        
    }
    return false;
    
};


int main(){


    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<duplicateelement(arr,10);




    return 0;
}