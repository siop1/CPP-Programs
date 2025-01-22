// WAP to demonstrate operator overloading for increment prefix ++
#include<iostream>
using namespace std;

class A{
    public:
        int x=10;
        void operator ++(){
            x=x+2;
        }
};
int main(){
    A aa;
    ++aa;
    cout<<aa.x;
    return 0;
}

// Note in exam use private variable and use methods as far as possible
// same for decrement prefix --
