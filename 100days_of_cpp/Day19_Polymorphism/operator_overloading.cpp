#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0) // constructor
    {
        real = r;
        imag = i;
    }
    // Operator overloading function for +
    Complex operator+(Complex const &obj)
    {
        Complex result;
        result.real = real + obj.real;  // add real parts
        result.imag = imag + obj.imag;   // add imaginary parts
        return result;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl; //This calls operator+()
    }
};

int main()
{
    Complex c1(2, 3), c2(1, 7);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;

}
