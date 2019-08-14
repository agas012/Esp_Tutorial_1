#include <iostream>
#include "Sqrall.h"



Sqrall::Sqrall()
{
}


Sqrall::~Sqrall()
{
}

void disp(Box Obj) {
	std::cout << "Display box height, width, and length : " << std::endl;
	std::cout << Obj.height << std::endl;
	std::cout << Obj.width << std::endl;
	std::cout << Obj.length << std::endl;
}

double Sqrall::VolumeSqr(Box Obj) 
{
	return pow((Obj.height*Obj.width*Obj.length),2);
}
