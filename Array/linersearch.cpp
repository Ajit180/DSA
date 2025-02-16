#include<iostream>
using namespace std;

 bool linearsearch(int arr[],int key){

        for (int i = 0; i < 10; i++)
        {
            /* code */
            if (key=arr[i])
            {
                return true;
            }
            
            
        }
        
        return false;
 }

int main(){

      int arr[10]={54,55,-58,67,-19,87,94,25,78,50};

    //   int n=10;

      int key;
      cout<<"Enter the Key Want to search"<<endl;
      cin>>key;

     bool found =  linearsearch(arr,key);
     
     if (found)
     {
        /* code */
        cout<<"Key is Present"<<endl;
     }
     else{
        cout<<"Key is not Present"<<endl;
        
     };

       


}