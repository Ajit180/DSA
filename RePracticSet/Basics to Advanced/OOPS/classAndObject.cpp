#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    int speed;

    void display(){
        cout<<"Brand :"<<brand <<" , Speed "<<speed<<"km/h"<<endl;
    }
};


int main(){

    Car car1;
    car1.brand="Maruti";
    car1.speed = 50;
     
    car1.display();

    return 0;
};