#include<iostream>
using namespace std;
class A{
    protected:
    int x=10;
};

// A==> B ==> [D] <== C
class B:public A{
    protected:
    int y=20;
};

class C{
    protected:
    int z=30;
};

class D:public B,public C{
    public:
    void sum(){
        cout << "sum="<< x+y+z;
    }
};
int main(){
    // Hybrid inheritance
    D dd;
    dd.sum();
    return 0;
}



