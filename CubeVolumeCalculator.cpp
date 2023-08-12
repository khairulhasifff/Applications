//Using the input operator of C++ Programming Syllabus
#include <iostream>

int main()
{
	float h, w, d, vol;

	std::cout << "<Prompt the 3 numbers below>\n";
	std::cout << "Enter Height:";
	std::cin >> h;
	std::cout << "Enter Width:";
	std::cin >> w;
	std::cout << "Enter Depth:";
	std::cin >> d;
	vol = h*w*d;

	// First: using (endl) without using return 0.
	/*cout << "Volume of the cube in cm^3 is " << vol << endl;*/  

	// Second: using return 0 without using endl.
	std::cout << "Volume of the cube is " << vol << "cm^3" << std::endl;             
	
	return 0;
}

