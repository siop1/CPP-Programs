#include<iostream>
using namespace std;

// multiple  inheritance
class A{
    protected:
    int x=10;
};

class B:protected A{
    protected:
    int y=10;
};


class C:protected B{
    public:
    void display(){
        cout<<x+y;
    }
};
int main(){
    // making object of C
    C cc;
    cc.display();
    return 0;
}