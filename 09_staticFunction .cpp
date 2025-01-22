// C++ program to demonstrate static
// member function in a class
#include <iostream>
using namespace std;

class A
{
public:
    // static member function
    static void display()
    {
        cout << "Welcome to GfG!";
    }
};

int main()
{
    // invoking a static member function
    A::display();
    return 0;
}