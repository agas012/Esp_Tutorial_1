#include <iostream>
#include "Box.h"
#include "Sqrall.h"

// Main function for the program
//https://en.wikipedia.org/wiki/Indentation_style
//https://jeremybytes.blogspot.com/2013/04/where-do-curly-braces-belong.html
int main() 
{
	//define the object
	Box box; 
	Box box2(10.0, 5.0, 20.0);

	// set box length without member function
	box.length = 10.0; // OK: because length is public
	box.height = 20.0; // OK: because length is public
	std::cout << "Length of box : " << box.length << std::endl;
	std::cout << "Height of box : " << box.length << std::endl;

	// set box width without member function
	// box.width = 10.0; // Error: because width is private
	box.setWidth(10.0);  // Use member function to set it.
	std::cout << "Width of box : " << box.getWidth() << std::endl;

	std::cout << "Box volume : " << box.Volume() << std::endl;
	std::cout << "Box2 volume : " << box2.Volume() << std::endl;

	disp(box);

	Sqrall Boxsqr;
	std::cout <<"Box volume^2 : " <<Boxsqr.VolumeSqr(box) <<std::endl;

	if (box.compare(box2)) {
		std::cout << "Box2 is smaller than Box" << std::endl;
	}
	else {
		std::cout << "Box2 is equal to or larger than Box1" << std::endl;
	}

	//Declare pointer to a class
	Box *ptrBox;
	// Save the address of first object
	ptrBox = &box;

	// Now try to access a member using member access operator
	std::cout << "Volume of Box1: " << ptrBox->Volume() << std::endl;

	// Save the address of second object
	ptrBox = &box2;

	// Now try to access a member using member access operator
	std::cout << "Volume of Box2: " << ptrBox->Volume() << std::endl;

	
	return 0;
}