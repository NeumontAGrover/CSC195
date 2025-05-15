#include <MemoryReview.h>
#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void Square(int& i) {
    i *= i;
}

void Double(int *i) {
    *i *= 2;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	// declare a int reference and set it to the int variable above
    int myFirstNumber = 5;
    int& myFirstNumberRef = myFirstNumber;

	// output the int variable
    cout << "My first number: " << myFirstNumber << endl;
    
	// set the int reference to some number
    myFirstNumberRef = 7;
	// output the int variable
    cout << "My first number: " << myFirstNumber << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
    /*
        When creating a reference type in C++, whenever a reference is created it (depending on compiler)
        shares the same memory address as the original variable, meaning if you change the value from the reference,
        it changes the original variable too.
    */ 

	// output the address of the int variable
    cout << "My first reference: " << &myFirstNumber << endl;
	// output the address of the int reference
    cout << "My first reference: " << &myFirstNumberRef << endl;
	// are the addresses the same or different? (insert answer)
    /*
        In this case, using the clang++ compiler, the memory addresses are the same.
        Same result in g++ compiler too.
    */

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section

	// output the int variable to the console
    Square(myFirstNumber);
    cout << "Squaring before reference: " << myFirstNumber << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	// set the int pointer to the address of the int variable created in the REFERENCE section
    int *myFirstPointer = &myFirstNumber;

	// output the value of the pointer
	// what is this address that the pointer is pointing to? (insert answer)
    cout << "Pointer address: " << myFirstPointer << endl;
	// output the value of the object the pointer is pointing to (dereference the pointer)
    cout << "Pointer value: " << *myFirstPointer << endl;
    
	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
    Double(myFirstPointer);
	
	// output the dereference pointer
    cout << "After doubling the pointer: " << *myFirstPointer << endl;
	// output the int variable created in the REFERENCE section
    cout << "Reference after doubling the pointer: " << myFirstNumberRef << endl;
	// did the int variable's value change when using the pointer?
    /*
        Yes, they both point to the original variable, and they both modified the value at some point,
        meaning that the reference was also updated.
    */
}