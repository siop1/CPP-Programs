#include<iostream>
using namespace std;
class A{
    protected:
    int x=10,y=20;
};

// B <==A==> C 
class B:public A{
    public:
    void sum(){
        cout << "Sum="<< x+y<<endl;
    }
};

class C:public A{
    public:
    void pro(){
        cout << "Product="<< x*y<<endl;
    }
};
int main(){
    // hierarchial inheritance
    B bb;
    C cc;
    bb.sum();
    cc.pro();
    return 0;
}