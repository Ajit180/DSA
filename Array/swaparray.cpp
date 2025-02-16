#include<iostream>
using namespace std;

void printarr(int arr[],int size){
     
     for (int i = 0; i < size; i++)
     {
        /* code */
        cout<<arr[i]<<"  ";
     }
     cout<<endl;
     
}

 void swaparray(int arr[],int size){

      for (int i = 0; i < size; i=+2)
      {
        /* code */
        if (i+1<size)
        {
            /* code */
            swap(arr[i], arr[i+1]);
        }
        
      }
      
 }

int main (){

    int evenarray[8]={34,53,64,465,434,65453,63454,3764};

    int oddarray[5]={98,78,45,90,67};

    swaparray(evenarray,8);
    swaparray(oddarray,5);

    printarr(evenarray,8);
    printarr(oddarray,5);

    // return 0;
}