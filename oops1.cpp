#include<iostream>
using namespace std;

class complex {
    float real, img;
public:
    complex() {
        real = 0;
        img = 0;
    }
    complex(float x, float y) {
        real = x;
        img = y;
    }
    complex operator+(complex&);
    complex operator*(complex&);
    friend istream& operator>>(istream&, complex&);
    friend ostream& operator<<(ostream&, const complex&);
};

istream& operator>>(istream& din, complex& c) {
    cout << "Enter the real part: ";
    din >> c.real;
    cout << "Enter the imaginary part: ";
    din >> c.img;
    return din;
}

ostream& operator<<(ostream& dout, const complex& c) {
    dout << c.real << "+" << c.img << "i";
    return dout;
}

complex complex::operator+(complex& c) {
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

complex complex::operator*(complex& c) {
    complex temp;
    temp.real = (real * c.real) - (img * c.img);
    temp.img = (real * c.img) + (img * c.real);
    return temp;
}

int main() {
    complex c1, c2, c3, c4;
    cout << "Enter the first complex number:\n";
    cin >> c1;
    cout << "Enter the second complex number:\n";
    cin >> c2;

    c3 = c1 + c2;
    cout << "The addition of the complex numbers is: " << c3 << endl;

    c4 = c1 * c2;
    cout << "The multiplication of the complex numbers is: " << c4 << endl;

    return 0;
}

