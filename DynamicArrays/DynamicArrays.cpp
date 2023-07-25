#include <iostream>

int main() {
	int theSize; 

	std::cout << "Please Enter the size of your array: ";
	std::cin >> theSize;
	std::cout << "\n"; 

	int* myPtr = new int[theSize];		// Just created a dynamic memory for int * theSize

	for (int i = 0; i < theSize; i++) {
		myPtr[i] = 30 + i; 
	}

	for (int i = 0; i < theSize; i++) {
		std::cout <<"The memory location of myPtr [" << i << "]" << " is " << myPtr + i; 
		std::cout <<" and has a value of " << *(myPtr + i) << std::endl;
	}

	delete []myPtr;	// This is how you should properly deallocate your dynamically allocated memory 
					// using thie exact Syntax. 
	
	myPtr = NULL;   // This is just to make sure that our pointer doesn't point to anything. 
					// as the memory location it used to point to has just been deallocated. 
	return 0; 
} 