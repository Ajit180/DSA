#include<iostream>

using namespace std;
//Question: find the first and last occurnace with given sorted array
int firstoccr(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int ans = -1;
    int mid = start +(end-start)/2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            end = mid-1;
           
        }
        else if (key>arr[mid])//Right me jaoo
        {
            start=mid+1;
        }

        else if (key<arr[mid])//Left me jaoo
        {
            end = mid-1;
        }


        mid = start +(end-start)/2;  
        
    }

    return ans;
    
}



int lastoccurance(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int ans = -1;
    int mid = start +(end-start)/2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            start = mid+1;
           
        }
        else if (key>arr[mid])//Right me jaoo
        {
            start=mid+1;
        }

        else if (key<arr[mid])//Left me jaoo
        {
            end = mid-1;
        }


        mid = start +(end-start)/2;  
        
    }

    return ans;
    
}

int main(){

    int odd[8]={1,2,3,4,5,5,5,6};//Array must be sorted

    cout<<"First Occornace of the 5 is at the index "<<firstoccr(odd,8,5)<<endl;
    cout<<"last Occornace of the 5 is at the index "<<lastoccurance(odd,8,5)<<endl;

    int totalnumberofoccurance=lastoccurance(odd,8,5)-firstoccr(odd,8,5)+1;

    cout<<"Total number of occurance of 5 is "<<totalnumberofoccurance<<endl;

    return 0;
}