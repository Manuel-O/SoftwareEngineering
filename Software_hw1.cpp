
 // Software engineering Homework 1.
 // Manuel Ojeda Osorio
 // M1 MAIA Student

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



// C Program to calculate area of a circle. PROBLEM 1
float Problem1(){
    #define PI 3.1416
    float diameter, radius, area, circumference;

    cout << "Enter diameter of circle\n";
    cin >> diameter;

    radius = diameter/2; // Formula to get radius
    // Area of Circle = PI x Radius X Radius
    area = PI*radius*radius;
    // Circumference of Circle = 2 X PI x Radius
    circumference = 2*PI*radius;

    cout << "\n\nCircumference of circle : " << circumference << "\n";
    cout << "Area of circle : " << area;

    return 0;
}



// C Program to find the max and the min of a table. PROBLEM 2
int Max(int a[],int n) //function to find largest element
{
	int i, max;
	max = a[0];//assume that first element is max
	for(i=1;i<n;i++)
	{
		if(a[i]>max) //if currentelement is greater than max
			max =a[i]; //assign that number as max now
	}
	return max; //returns the largest number to main function
}

int Min(int a[],int n) //function to find smallest element
{
	int i, min;
	min = a[0];// assuming first element as minimum
	for(i=1;i<n;i++)
	{
		if(a[i]<min)// If current element is smaller than min
			min =a[i];//assigning the smaller number to min
	}
	return min; //returns the smallest number to main function
}
int Problem2()
{
    #define SIZE 10        //Defining max size of array for find max and min
	int i, array[SIZE], size, max, min;

	cout<<"Input number of elements in array\n";
	cin>>size;

	cout<<"Enter "<< size << " integers\n";
	for(i=0;i<size;i++)
	cin>>array[i];

	max = Max(array,size); //calls the max function
	min = Min(array,size); //calls the min function

	// Print maximum and minimum element
	cout<<"Maximum element in the array is:" << max << "\n";
	cout<<"Minimum element in the array is:" << min << "\n";

return 0;
}



// C Program which allows to compute the Fibonacci sequence. PROBLEM 3
int Problem3()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout  << t1 << " ";
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
    }
    return 0;
}



// C Program to display in the terminal any multiplication table. PROBLEM 4

int Problem4()
{
    int n, range;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "Enter range: ";
    cin >> range;

    for (int i = 1; i <= range; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}


// C Program to compute the truth table of AND or OR operators using 3 variable as input. PROBLEM 5

int Problem5() {
    string gate;
    bool o[8] = { true, true, true, true, false, false, false, false };
    bool p[8] = { true, true, false, false, true, true, false, false };
    bool q[8] = { true, false, true, false, true, false, true, false };

    cout << "Which operator (AND or OR) do you want to use for the 3 variables?" << endl;
    cin >> gate;

    if (gate == "AND" || gate == "OR") {
        if (gate == "AND") {
            cout << "o | p | q" << " | " << "o A p A q" << endl;
            for (int m = 0; m < 8; m++) {
                cout << o[m] << " | ";
                for (int i = 0; i < 1; i++) {
                    cout << p[m] << " | ";
                    for (int j = 0; j < 1; j++) {
                        cout << q[m] << " | ";
                        cout << setw(5) << (o[m] && p[m] && q[m]);
                    }
                    cout << endl;
                }
            }
        }
        else if (gate == "OR") {
            cout << "o | p | q" << " | " << "o V p V q" << endl;
            for (int m = 0; m < 8; m++) {
                cout << o[m] << " | ";
                for (int i = 0; i < 1; i++) {
                    cout << p[m] << " | ";
                    for (int j = 0; j < 1; j++) {
                        cout << q[m] << " | ";
                        cout << setw(5) << (o[m] || p[m] || q[m]);
                    }
                    cout << endl;
                }
            }
        }
    }
    else {
    cout << "ERROR: Please enter valid values - EX(AND, OR)." << endl;
    }

    return 0;
}

int main()
{
    int option;
    cout << "Which problem do you want to solve? Type the number of the option you want." << endl;
    cout << "1.- Program to calculate area of a circle." << endl;
    cout << "2.- Program to find the max and the min of a table." << endl;
    cout << "3.- Program which allows to compute the Fibonacci sequence." << endl;
    cout << "4.- Program to display in the terminal any multiplication table." << endl;
    cout << "5.- Program to compute the truth table of AND or OR operators using 3 variable as input." << endl;
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
    else {
        cout << "The option does not exist." << endl;
    }
}
