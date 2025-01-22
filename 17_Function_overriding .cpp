#include<iostream>
using namespace std;

class Parent{
    public:
    void display(){
    cout << "I am parent"<<endl;
    }
};

class Child:public Parent{
    public:
    void display(){
    cout << "I am child"<<endl;
    }
};

int main(){

    // method of child class will be given preference if parenta and child class have same method name
    Child c;
    c.display();
    // can access display() of Parent using object of Child
    c.Parent::display(); // try Parent::display() inside Child class method will also work
    return 0;
    
}