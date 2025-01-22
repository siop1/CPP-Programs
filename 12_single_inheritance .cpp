#include<iostream>
using namespace std;

// single inheritance
class A{
    protected:
    int x=10;
};

class B:protected A{
    public:
    void display(){
        cout<<x;
    }
};
int main(){
    // making object of B
    B bb;
    bb.display();
    return 0;
}