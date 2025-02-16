#include<iostream>
using namespace std;

class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
    
public:
    Queue(int size) {
       this->size= size;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	//int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         //return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};

int main(){

    Queue qu =(5);
    qu.enqueue(45);
    qu.enqueue(67);
    qu.enqueue(89);
    cout<<qu.front()<<endl;
    qu.dequeue();
    cout<<qu.front()<<endl;


    return 0;
}