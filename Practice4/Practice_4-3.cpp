//Software engineering
//MAIA Student
//Manuel Ojeda Osorio
//Exercise number 3

#include<iostream>
using namespace std;

class Complex {

public:
    int real;
    int imaginary;

    Complex()
    {
    }

    Complex(int inReal, int inImaginary)
    {
        real = inReal;
        imaginary = inImaginary;
    }

    Complex addComp(Complex C1, Complex C2)
    {

        Complex temp;

        temp.real = C1.real + C2.real;

        temp.imaginary = C1.imaginary + C2.imaginary;

        return temp;
    }
};

int main(){

    int ComplexReal1, ComplexImaginary1;
    int ComplexReal2, ComplexImaginary2;

    cout << "\nWrite the first complex number, \nbegin with the real number: ";
    cin>> ComplexReal1,
    cout << "The imaginary part: i";
    cin >> ComplexImaginary1;

    cout << "\nWrite the first complex number, \nbegin with the real number and then the imaginary: ";
    cin>> ComplexReal2,
    cout << "The imaginary part: i";
    cin >> ComplexImaginary2;

    Complex C1(ComplexReal1, ComplexImaginary1);
    Complex C2(ComplexReal2, ComplexImaginary2);

    Complex C3;

    C3 = C3.addComp(C1, C2);

    cout<<"\n\nThe total of the sum of the complex number is: " << C3.real << " + i"
                       << C3.imaginary << endl << endl;

    return 0;
}
