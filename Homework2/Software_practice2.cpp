
// Software engineering Homework 2.
// Manuel Ojeda Osorio
// M1 MAIA Student

#include <iostream>
#include <string>
#include <iomanip>
#include "Software_practice2.h"
using namespace std;

int main()
{
    int option;
    cout << "Which function do you want to try? Type the number of the option you want." << endl;
    cout << "1.- Calculator." << endl;
    cout << "2.- Identify smallest and biggest value, also the value that occurs the most." << endl;
    cout << "3.- Program to sort 10 integer values." << endl;
    cout << "4.- Pascal triangle." << endl;
    cout << "5.- Pointer program max value." << endl;
    cout << "6.- Enter 5 integer values." << endl;
    cout << "7.- Sort and array of integers." << endl;
    cin >> option;

    if(option == 1){
        Problem1();
        }
    else if(option == 2){
        Problem2();
        }
    else if (option == 3){
        Problem3();
        }
    else if(option == 4){
        Problem4();
        }
    else if (option == 5){
        Problem5();
        }
    else if (option == 6){
        Problem6();
        }
    else if (option == 7){
        Problem7();
        }
    else {
        cout << "The option does not exist." << endl;
    }
}
