//Software engineering
//MAIA Student
//Manuel Ojeda Osorio
//Exercise number 1

#include<iostream>
using namespace std;


class Rectangle{

	private:

		float length;
		float width;
		float area;

	public:

		void setlength();
		void setwidth();
		void math_area();
		void show();

};

void Rectangle::setlength(){
    float len;
    cout<<"\nEnter length of the rectangle: ";
    cin>>len;
    length = len;
}

void Rectangle::setwidth(){
    float wid;
    cout<<"\nEnter width of the rectangle: ";
    cin>>wid;
    width = wid;
}

void Rectangle::math_area(){

    area = length*width;

}

void Rectangle::show()

{

	cout << "\n\nLength: " << length << " Width: " << width;
	cout << "\nThe area of the rectangle is: " << area << endl << endl;

}

int main(){

    Rectangle r1;

    r1.setlength();
    r1.setwidth();

    r1.math_area();

    r1.show();

    return 0;
}
