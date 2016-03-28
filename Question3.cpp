///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {
private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction(int n, int d) : num(n), denom(d) { };
	friend bool operator>(Fraction&, Fraction&);
	void print() { cout << num << "/" << denom; };
};

bool operator>(Fraction & f1, Fraction & f2)
{
	//int gcd = f1.denom*f2.denom;
	int num1 = f1.num*f2.denom;
	int num2 = f2.num*f1.denom;
	if (num1 > num2)
		return true;
	else
		return false;
}

int main() {
	Fraction f1(1, 2);
	Fraction f2(2, 3);
	bool test = f2 > f1;
	cout << test << endl;
}