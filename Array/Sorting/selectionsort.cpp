#include<iostream>
using namespace std;

 void selectionSort(int arr[],int n){

    for (int i = 0; i < n-1; i++)
    {
        int minindex = i;
        for (int j =i+1; j < n; j++)
        {
            if (arr[minindex]>arr[j])
            {
                minindex = j;
            }
            
        }

        if (minindex!=i)
        {
            int temp = arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
            
        }
        
    }
    
 }

 void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){


    int arr[] = {67,56,46,35,23,11};

    int n = sizeof(arr)/sizeof(arr[0]);
  
    selectionSort(arr,n);

    printArray(arr,n);

    
    


    return 0;
}