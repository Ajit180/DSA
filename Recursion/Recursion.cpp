#include<iostream>
using namespace std;

int factorial(int num){

  //base conditions
  if (num==0)
  return 1;
  
  int num1 = factorial(num-1);// main condtions
  return num*num1;
  
   
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;

}