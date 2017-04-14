#include<iostream>

int main()
{

	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	float tree = 3; // int converted to float
	int guess(3.9832); // double converted to int
	int debt = 7.2E12; // not defined for C++ 
	std::cout << "tree = " << tree << std::endl;
	std::cout << "guess = " << guess << std::endl;
	std::cout << "debt = " << debt << std::endl;

	return 0;
}