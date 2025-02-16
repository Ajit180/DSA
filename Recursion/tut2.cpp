#include<iostream>

using namespace std;

int basicrecursion(int n){
   
    if (n>0)
    {
        cout<<"The value is "<<n<<endl;
        basicrecursion(n-1);
    }
    
}

int main(){

    int x = 5;

    basicrecursion(x);

    return 0;
}