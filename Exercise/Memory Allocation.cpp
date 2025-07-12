#include<iostream>

int main() {
	int* arr = new int[3]; // Allocate memory for an array of 3 integers
// Initialize the array
	for (int i = 0; i<3; ++i) {
		arr[i] = i + 1;
	}
// Print the array elements
	for (int i = 0; i<3; ++i) {
		std::cout << arr[i] <<" "; // Output: 1 2 3
	}
	std::cout << std::endl;
	delete[] arr; // Deallocate the array memory
return 0;
}

