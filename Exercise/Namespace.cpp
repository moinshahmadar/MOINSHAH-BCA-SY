#include<iostream>
// Define a namespace called Math
namespace Math {
	int add(int j, int k) {
		return j + k;
	}
   }
int main() {
// Use the add function from the Math namespace
 	std::cout <<"Sum: "<<Math::add(4, 3) << std::endl;

// Alternatively, with 'using' directive
	using namespace Math;
	std::cout <<"Sum: "<<add(5, 2) << std::endl;

	return 0;
}
