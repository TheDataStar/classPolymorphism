// FileName: Rectangle Polymorphism.
// ProjectName: CS288T Unit 4 Submission 1 - Polymorphism and Operator Overloading in C++
// Author: Adam Greenwood (22579036)

#include <iostream>
#include "Calculator.h"

using namespace std;

class Rectangle															// Rectangle class.
{
	private:															// Access Specifier.
		int length;														// Data Members (Features).
		int height;

	public:																// Access Specifier.
		Rectangle(int l = 0, int h = 0) { length = l; height = h;}		// Paramaterized Constructor.
		Rectangle operator + (Rectangle const& obj)						
		{																// Function to be called whenever the "+" operator is used between two objects.
			Rectangle myRectangle;
			myRectangle.length = length + obj.length;
			myRectangle.height = height + obj.height;
			return myRectangle;
		}

		void print() { cout << "Overload length: "<< length << " and " << "Overload height: " << height << endl; }		// Print function with specific output.
};

int main()
{
	Rectangle rectangle1(10, 20);										// Instantiation of Rectangle class to create to paramaterized objects.
	Rectangle rectangle2(14, 17);
	Rectangle overloadRectangle = rectangle1 + rectangle2;				// Operator overload of two rectangle objects to creat new object.
	overloadRectangle.print();											// Output of overloaded object.
};