#ifndef SOFTWARE_PRACTICE2_H
#define SOFTWARE_PRACTICE2_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// C Program to calculator. PROBLEM 1
int add(int num1, int num2){
    int result_add;
    result_add = num1 + num2;
    return result_add;
}

int subtract(int num1, int num2){
    int result_sub;
    result_sub = num1 - num2;
    return result_sub;
}

int multiply(int num1, int num2){
    int result_mul;
    result_mul = num1 * num2;
    return result_mul;
}

int divide(int num1, int num2){
    int result_div;
    result_div = num1 / num2;
    return result_div;
}

int modulo(int num1, int num2){
    int result_mod;
    result_mod = num1 % num2;
    return result_mod;
}

void Problem1()
{

    int option_menu, number1, number2, result;
    char go_on = 'y';

    while(go_on == 'y'){
    cout << "\n CALCULATOR MENU: \n";
    cout << "1. Add \n";
    cout << "2. Subtract \n";
    cout << "3. Multiply \n";
    cout << "4. Divide \n";
    cout << "5. Modulus \n";
    cin >> option_menu;

    cout << "\nEnter your two numbers: ";
    cin >> number1 >> number2;

    if(option_menu == 1){
        result = add(number1, number2);
        cout << "Result: " << result;
        }
    else if(option_menu == 2){
        result = subtract(number1, number2);
        cout << "Result: " << result;
        }
    else if (option_menu == 3){
        result = multiply(number1, number2);
        cout << "Result: " << result;
        }
    else if(option_menu == 4){
        result = divide(number1, number2);
        cout << "Result: " << result;
        }
    else if (option_menu == 5){
        result = modulo(number1, number2);
        cout << "Result: " << result;
        }
    else {
        cout << "The option does not exist." << endl;
    }

    cout << "\n\nContinue? Y/N \n";
    cin >> go_on;

    if(go_on != 'y'){
        go_on = 'n';
        }

    }
}


// C Program to find the max, the min and the one occurs the most of a table. PROBLEM 2
int Max(int a[],int n)
{
	int i, max;
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max =a[i];
	}
	return max;
}

int Min(int a[],int n)
{
	int i, min;
	min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min =a[i];
	}
	return min;
}

int Com(int array[],int n)
{
    int i, j, com, maxCount, count;
    maxCount = INT_MIN;
    for(i = 0; i< 10; i++){
        count = 1;
        for(j = i+1; j < 10; j++){
            if(array[j] == array[i]){
                count++;
                if(count > maxCount){
                    maxCount = count;
                    com = array[j];
                }
            }
        }
    }
	return com;
}

void Problem2()
{
	int i, array[10], max, min, com;

	cout<<"\nEnter 10 integers\n";
	for(i=0;i<10;i++)
	cin >> array[i];

	max = Max(array,10);
	min = Min(array,10);
	com = Com(array,10);

	// Print maximum and minimum element
	cout << "\nMaximum element in the array is: " << max << "\n";
	cout << "Minimum element in the array is: " << min << "\n";
	cout << "Element which occurs most in the array is: " << com << "\n";


}


// C Program which sort 10 integer values. PROBLEM 3
void Problem3()
{
    int i, j, k, array[10];

    cout<<"\nEnter 10 integers\n";
	for(i=0;i<10;i++){
        cin >> array[i];
	}

	for(i=1;i<10;i++){
        for(j=0;j<10-i;j++){
            if(array[j]>array[j+1]){
            k=array[j+1];
            array[j+1]=array[j];
            array[j]=k;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        cout << array[i] << endl;
    }

}


// C Program which generates the Pascal Triangle. PROBLEM 4
void Problem4()
{
    int level;
    cout << "\nIngress the level of the triangle: ";
	cin >> level;

	int matriz[level][level];

    matriz[0][0] = 1;
    cout << "\n\n" << matriz[0][0];

    for(int i=0;i<level-1;i++){
        matriz[i][0] = 1;
        matriz[i][i+1] = 1;
        cout << "\n\n";
        for(int j=0;j<i+2;j++){
            matriz[i+1][j+1] = matriz[i][j] + matriz[i][j+1];
            cout << matriz[i][j] << setw(4);
        }
    }

}


// C Program POINTER: Max value. PROBLEM 5
void Problem5()
{
    int value_array;
    cout << "\nEnter the number of data value: ";
	cin >> value_array;
	int array[value_array];
	int max = array[0];
	int *ptr = &max;

	for(int i=0;i<value_array;i++){
        cout << "\nEnter value " << i+1 << ": ";
        cin >> array[i];
	}

	for(int i=0;i<value_array;i++){
        if(array[i]>max)
			max =array[i];
            ptr = &max;
	}

	cout << "\nThe max is " << *ptr;

}


// C Program to accept 5 integer values. PROBLEM 6
void PrintValues( const int *ptr, int size ) {
  cout << "\nThe values entered are: \n";

  for(int i=0;i<size;++i){
        cout << ptr[i] << "\n";
  }

}

void Problem6()
{
    #define SIZE 5
    int array[SIZE];
	int *ptr = array;

	for(int i=0;i<SIZE;i++){
        cout << "\nEnter value " << i+1 << ": ";
        cin >> array[i];
	}

	PrintValues(array, SIZE);

}


// C Program which sort integer values. PROBLEM 7
void PointerValues( const int *ptr, int size ) {

    cout << "\nThe values entered are: \n";

    for(int i=0;i<size;i++){
        cout << ptr[i] << endl;
    }

}

void Problem7()
{
    int i, j, k, size, array[10];

    cout<<"Input number of elements in array\n";
	cin>>size;

    cout<<"Enter "<< size << " integers:\n";
	for(int i=0;i<size;i++){
        cin>>array[i];
	}

    for(i=1;i<size;i++){
        for(j=0;j<size-i;j++){
            if(array[j]>array[j+1]){
                k=array[j+1];
                array[j+1]=array[j];
                array[j]=k;
            }
        }
    }

	PointerValues(array, size);

}

#endif // SOFTWARE_PRACTICE2_H
