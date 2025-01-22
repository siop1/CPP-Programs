#include<iostream>
using namespace std;
class A{
    public:
    void displaya(){
        cout << "I am class A"<<endl;
    }
};

class B:public A{
    A aa;
    public:
    void displayb(){
        aa.displaya();
    }
};

int main(){
    B bb;
    bb.displayb();
    return 0;
}