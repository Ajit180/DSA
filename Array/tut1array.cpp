#include<iostream>
using namespace std;


 void functions(int array2[3]){
              
              for (int i = 0; i < 3; i++)
              {
                cout<<array2[i]<<endl;
              }
              
       }



int main(){
    

    int array2[3]={343,64,644};

    functions(array2);

    //cout<<"The value stored in array is "<<array1[0]<<endl;

    // int n =2;
    // for (int i = 0; i <= n; i++)
    // {
    //     int p;
    //     p=array1[i];
    //     cout<<p<<" ";
    // }

    char *p[]={"AjitYadav","Branch","ComputerScience"};

    cout<<"First Element Print"<<*p<<endl;
    // cout<<"Second Element Print"<<*(p+1)<<endl;
    // cout<<"Third Element Print"<<*(p+2)<<endl;


    
    
    

}