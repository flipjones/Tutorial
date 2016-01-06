/************
** Author: Philip Jones
** Date: March 30, 2015
** Description: First program to tell you what your favorite animal is.
************/
#include <iostream>
#include <string>

// a simple example program
 int main()
{
 	std::string faveAnimal;
 	std::cout << "Please enter your favorite animal." << std::endl;
 	std::cin >> faveAnimal;
 	std::cout << "Your favorite animal is the " << faveAnimal;
 	std::cout << "." << std::endl;

 	return 0;

}


