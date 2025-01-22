// demo of constructor and destructor
#include <iostream>
using namespace std;
class Display
{
private:
    float p, t, r; // data member

public:
    // constructor overloading
    Display()
    {
        cout << "I have no parameter" << endl;
    }
    Display(int a, int b)
    {
        cout << "Two parameter are " << a << " " << b << endl;
    }


};
    int main()
    {
        Display a;
        Display b(2,3.5);
        return 0;
    }