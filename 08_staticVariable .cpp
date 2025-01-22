#include<iostream>
using namespace std;

class A{
    public:
        static int a;
};
// int A::a; // by default 0
int A::a=10;
int main(){
    A m;
    cout <<m.a;
    return 0;
}