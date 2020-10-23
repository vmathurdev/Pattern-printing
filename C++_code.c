// The below program prints a customized star pattern which is user defined 

 
// Standard library function in C++ to invoke functions which are used oftenly 
#include <iostream>
using namespace std;

// Defining the main function
int main() 
{ 
// Initializing the data type variables 
    int row, col, space, max,min,count=0;
	cout << "Welcome to the programming world, program created by Vinamra Mathur \n";
	cout << "---------------------------------------------------------------------  \n";
    cout << "Enter minimum number of stars : ";  // Standard functions to print, input as part of the iostream library functions
    cin >> min;
	cout<<"Enter maximum number of stars: ";
	cin>> max;
	// run parent loop 
	// the # rows as defined by the user
	
    for(row= min ; row<= max ;row++){

	// loop for printing the spaces before star pattern	

	for(space = 1 ;space <= max - row ; space ++){
		cout <<" ";
	}
	// for loop to print the star pattern 
		for(col = 1 ; col<=row ; col++){
			cout<<"* ";
			count++;
		}
		cout << endl; // inserts a new line character
	}
	// for printing in the reverse pattern
	
	
	for(row = max -1 ; row >= min ; row--){
for(space = 1 ;space <= max - row ; space ++){
		cout <<" ";
	}
		for(col = 1 ; col<=row ; col++){
			cout<<"* ";
			count++;
		}
		cout << endl;
	}
	
	cout<<"The total number of stars printed is: "<<count; // final # of stars being printed 
	
	 return 0; // the return value is due to int type of main function, the value is considered the exit of application
}
