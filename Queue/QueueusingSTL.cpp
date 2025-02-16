#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    queue<int>q;
    q.push(45);
    q.push(32);
    q.push(56);
    cout<<"The size of the Queue is "<<q.size()<<endl;
    q.pop();
    cout<<"The size of the Queue is "<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<"The size of the Queue is "<<q.size()<<endl;
    cout<<"The first Element is "<<q.front()<<endl;

    return 0;
}