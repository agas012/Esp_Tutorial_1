#pragma once
class Box
{
public:
	Box();
	Box(double len, double hei, double wid);
	~Box();
	double length;
	double height;
	void setWidth(double wid);
	double getWidth(void);

	inline double Volume() {
		return (length * height * width);
	}

	friend void disp(Box Obj);
	friend	class Sqrall;

	//this Pointer
	int compare(Box box) {
		return this->Volume() > box.Volume();
	}

private:
	double width;
};

