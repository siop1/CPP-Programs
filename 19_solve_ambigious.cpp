// If the two base class has the same data member or member function and the derived class has no such member then compiler gets confused regarding which member is to access and error is produces which is known as ambiguity.

#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout << "I am A"<<endl;
    }
};

class B{
    public:
    void display(){
        cout << "I am B"<<endl;
    }
};

class C:public A,public B{
    
};

int main(){
    C cc;
    cc.A::display();
    cc.B::display();
    return 0;
}