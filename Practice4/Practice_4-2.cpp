//Software engineering
//MAIA Student
//Manuel Ojeda Osorio
//Exercise number 2

#include<iostream>
using namespace std;

class SUM
{
private:
    int first_number;
    int second_number;
    int total;

public:
    SUM (int number_first, int number_second) //parameterized constructor to initialize
    {
        first_number = number_first;
        second_number = number_second;
    }

    int add() {  //add of both numbers
        total = first_number + second_number;
        return total;
    }

    void show(){
        cout<< "\n\nThe total is: " << total << endl;
    }
};

int main(){

    int number1, number2;

    cout << "Input two integers: \n";
    cin>> number1 >> number2;

    SUM sum1(number1, number2);

    sum1.add();
    sum1.show();

    return 0;
}
