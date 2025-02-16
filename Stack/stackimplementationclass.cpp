#include<iostream>
using namespace std;

class Stack{
  //properties
  public: 
    int *arr;
    int size;
    int top;

    //behaviour

    Stack(int size){

        this->size = size;
        arr= new int[size];
        top = -1;
    }

    void push(int element){
        if (size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is Overflow"<<endl;
        }
        
    }
    void pop(){
        if (top>=0)
        {
            top--;
        }
        else{
            cout<<"Stack is underflow"<<endl;
        }
        
    }

    int peek(){

        if (top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"Stack is Empty "<<endl;
            return -1;
        }
        
    }
    bool isStackisEmpty(){
        if (top==-1)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
};

int main(){

    Stack st = (5);
    st.push(23);
    st.push(45);
    st.push(90);
    st.push(89);
    st.pop();

    cout<<"The top element of the stack is "<<st.peek()<<endl;
    if (st.isStackisEmpty())
    {
        cout<<"Stack is Empty "<<endl;
    }
    else
     {
        cout<<"Stack is not empty"<<endl;
        }
     
    
    return 0;
}
