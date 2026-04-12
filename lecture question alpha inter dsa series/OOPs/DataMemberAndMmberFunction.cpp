#include<iostream>
using namespace std;
class car{
    public:
    string name;
    string model;
    int year;

    void start(){
        cout << name<<" " << model<<" " << "starting.........";

    }
    void stop(){
        cout << name<<" " << model<<" " << "stoping.........";
    }
};

int main(){
    car mycar;
    mycar.name="honda";
    mycar.model=2018;
    mycar.start();
    mycar.stop();



}