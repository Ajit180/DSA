#include <iostream>
#include<vector>
using namespace std;


int findMax(vector<int>&arr){
    int max= arr[0];
   for (int i = 1; i < arr.size(); i++)
   {
      if (arr[i]>max)
      {
         max=arr[i];
      }
      
   }
   
    return max;
    
}


// void minMaxnumber(int num[],int n){

//     int max =num[0],min=num[0];
//     for (int i = 1; i < n; i++)
//     {
//         /* code */
//         if (max<num[i])
//         {
//             max=num[i];
//         }
//         if (min>num[i])
//         {
//             min=num[i];
//         }
//     }
    
//         cout<<"Maximum Value is "<<max<<endl;
//         cout<<"Minimum Value is "<<min<<endl;
// }

int main()
{

    // int size;
    // cout << "Enter the size of Array" << endl;
    // cin >> size;
    // cout << "Enter the values of array" << endl;

    // int num[100];
    // for (int i = 0; i < size; i++)
    // {
    //     /* code */
    //     cin >> num[i];
    // }

    // minMaxnumber(num,size);

    vector<int> v={10,4,5,6,2,6,2,11,4,3};
    cout<<findMax(v);
    cout<<"hello";

   



    return 0;
}






