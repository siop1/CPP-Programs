// demo of constructor and destructor
#include <iostream>
using namespace std;
class Interest
{
private:
    float p, t, r; // data member

public:
    // constructor
    Interest()
    {
        cin >> p >> t >> r;
    }

    // member function or methods
    void display()
    {
        cout << "si is " << (p * t * r) / 100 << endl;
    }

    // destructor
    ~Interest()
    {
        cout << "I am destructor"<< endl;
    }
};

int main()
{
    Interest si;
    si.display();
    Interest a;
    return 0;
}