#include <cstdlib>
#include <iostream>


int main()
{	
	double r;
	r = ((double) rand() / (RAND_MAX));
	std::cout << r << std::endl;
}
