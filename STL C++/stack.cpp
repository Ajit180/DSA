#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<string>d;

    d.push("Ajit");
    d.push("Ravindra");
    d.push("Yadav");

    cout<<"print the top element in the stack -> "<<d.top()<<endl;

    d.pop();

    cout<<"print the top element in the stack -> "<<d.top()<<endl;
    d.push("Sinnar");

    cout<<"print the top element in the stack -> "<<d.top()<<endl;
    cout<<"Size of the Stack is "<<d.size()<<endl;

    //Empty or not
    cout<<"empty or not stack if it is 0 then empty or 1 then some value is present->"<<d.empty()<<endl;
    return 0;
}
