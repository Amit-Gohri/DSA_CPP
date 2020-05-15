// A simple C++ program for implementation of atoi 
#include <iostream> 
using namespace std; 

// A simple atoi() function 
int myAtoi(char* str) 
{ 
	int res = 0; // Initialize result 

	// Iterate through all characters of input string and 
	// update result 
	for (int i = 0; str[i] != '\0'; ++i) 
		res = res * 10 + str[i] - '0'; 

	// return result. 
	return res; 
} 

// Driver code 
int main() 
{ 
	char str[] = "8 9789"; 
	int val = myAtoi(str); 
	cout<< val; 
	return 0; 
} 

// This is code is contributed by rathbhupendra 
