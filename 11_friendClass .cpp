// friend keyword is used to access variables inside private
#include <iostream>
using namespace std;

class A
{
private:
    int a = 10;

public:
    friend class B;
};

class B
{
public:
    void display(A t)
    {
        cout << t.a << endl;
    }
};

int main()
{
    A a1;
    B b1;
    b1.display(a1);
    return 0;
}