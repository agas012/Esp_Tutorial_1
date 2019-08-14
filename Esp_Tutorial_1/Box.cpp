#include "Box.h"


// :: is use differently than when apply in namespace, they are use to define the functions outside the class

//default constructor 
Box::Box()
{
}

//default destructor
Box::~Box()
{
}

//Parameterized Constructor
Box::Box(double len, double hei, double wid) {
	length = len;
	width = wid;
	height = hei;
}
// Member functions definitions
double Box::getWidth(void) {
	return width;
}

void Box::setWidth(double wid) {
	width = wid;
}