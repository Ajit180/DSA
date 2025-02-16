#include<iostream>
using namespace std;


class Queue
{
    public:
    // Initialize front and rear
    int rear, front;
 
    // Circular Queue
    int size;
    int *arr;

    Queue(int s)
    {
       front = rear = -1;
       size = s;
       arr = new int[s];
    }
 
    void enQueue(int value){
        if ((front == 0 && rear == size-1) ||
            ((rear+1) % size == front))
    {
        cout<<"Queue is Full"<<endl;
        return;
    }

    else if (front == -1) /* Insert First Element */
    {
        front = rear = 0;
        arr[rear] = value;
    }

    else if (rear == size-1 && front != 0)
    {
        rear = 0;
        arr[rear] = value;
    }

    else
    {
        rear++;
        arr[rear] = value;
    }

    }

    int deQueue();

    void displayQueue()
{
    if (front == -1)
    {
        cout<<"Queue is Empty"<<endl;
        return;
    }
    cout<<"Elements in Circular Queue are: "<<endl;
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            cout<<arr[i]<<" ";
    }
    else
    {
        for (int i = front; i < size; i++)
            cout<< arr[i]<<endl;
 
        for (int i = 0; i <= rear; i++)
            cout<< arr[i]<<endl;
    }
}
};

int main(){

    Queue cirular1 = (5);
    cirular1.enQueue(45);
    cirular1.enQueue(67);
    cirular1.displayQueue();
    

    return 0;
}