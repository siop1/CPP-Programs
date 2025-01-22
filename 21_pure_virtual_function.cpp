// Example of late binding. 
// Wap to demonstrate virtual function 
// Wap to demostrate abstract class ==> Abstract class is the class having atleast one pure virtual function
#include<iostream>
using namespace std;
class A{
    public:
    virtual void display()=0;
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