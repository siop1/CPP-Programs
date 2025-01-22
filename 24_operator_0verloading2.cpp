// WAP to demonstrate operator overloading for increment postfix ++
#include<iostream>
using namespace std;

class A{
    public:
        int x=10;
        void operator ++(int){
            x=x+2;
        }
};
int main(){
    A aa;
    aa++;
    cout<<aa.x;
    return 0;
}