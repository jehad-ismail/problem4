#include<iostream>
using namespace std;

int main()
{
	float num1, num2, add, sub, mult, div;
	cout << "enter first number =  " << endl;
	cin >> num1;
	cout << "enter second number =  " << endl;
	cin >> num2;

	add = num1 + num2;
	sub = num2 - num1;
	mult = num1 * num2;
	div = num2 / num1;
	
	cout << "sum =  " << add << endl << "subtraction =  " << sub << endl << " multiplication =  " << mult << endl << "division =  " << div << endl;

	return 0;
}
//Write a program that takes two numbers from the user and prints the
results of addition, subtraction, multiplication, and division.
