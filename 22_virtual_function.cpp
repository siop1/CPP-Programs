// Example of late binding. 
// Wap to demonstrate virtual function 
#include<iostream>
using namespace std;
class A{
    public:
    virtual void display(){
        cout << "This is the base class"<<endl;
    }
};

class B:public A{
    public:
    void display(){
        cout << "This is the derived class"<<endl;
    }
};

int main(){
    A *bptr;
    B bb;
    bptr=&bb;
    bptr->display();
    return 0;
}