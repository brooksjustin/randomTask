#include<iostream>
#include "Student.h"
#include <vector>
#include<string>
using namespace std;
int main() {
	Student* Bob = new Student;
	char option='Z';
	int  arrSize;
	int i=0;
	string inputStr;
	int a = 0, b = 0;
	double sqrt = 0;
	cout << "Please make an input selection from the following : 'X' to exit" << endl << "'A' for array" << endl << "'V' for vector" << endl << "'F' for user defined functions" << endl << "'P' for pointers" << endl << "'R' for recursion" << endl << "'E' for exception handling" << endl << "'S' for binary search" << endl << "'T' for sorting" << endl;
	cout << "Please enter a option: " << endl;
	cin >> option;
	while (option != 'X') {
		switch (option) {
		case 'A':
		{
			cout << "Enter array size: " << endl;
			cin >> arrSize;
			int* arr = new int[arrSize];
			cout << "Enter the values of the array: " << endl;
			while (i < arrSize) {
				cin >> arr[i];
				i++;
			}
			Bob->TaskA(arr, arrSize);
		}
		break;
		case 'V':
			cout << "Please enter a string: " << endl;
			cin >> inputStr;
			cout << "The length of the string is " << Bob->TaskV(inputStr) << endl;
			break;

		case 'F':
			cout << "Please enter value A: " << endl;
			cin >> a;
			cout << "Please enter value B: " << endl;
			cin >> b;
			Bob->TaskF(a, b);
			cout << "The switched value of A is: " << a << endl;
			cout << "the switched value of B is: " << b << endl;
			break;
		case 'P':
			{
			cout << "Enter array size: " << endl;
			cin >> arrSize;
			int* arrSum = new int[arrSize];
			cout << "Enter the values of the array: " << endl;
			while (i < arrSize) {
				cin >> arrSum[i];
				i++;
			}
			cout << "The sum of the array is: "<<endl << Bob->TaskP(arrSum, arrSize)<<endl;
			}
			break;

		case 'R':
			cout << "Enter the value to find the factorial of: " << endl;
			cin >> a;
			cout << "The Factorial is: " << endl << Bob->TaskR(a)<<endl;
			break;
		case 'E':
			cout << "Enter a number to find the square root of: " << endl;
			cin >> a;
			Bob->TaskE(a);
			break;
		case 'S':
		{
			int x, result=0;
			cout << "Enter the array size: " << endl;
			cin >> arrSize;
			int* arr = new int[arrSize];
			cout << "Enter the values of the arry: " << endl;
			while (i < arrSize) {
				cin >> arr[i];
				i++;
			}
			cout << "Enter the number to search for: " << endl;
			cin >> x;
			result=Bob->TaskS(arr, 0, arrSize - 1, x);
			(result == -1) ? cout << "Element not in the array" << endl : cout << "Element is present at " << result << endl;
		}
			break;
		case 'T':
		{
			cout << "Enter the size of the array: " << endl;
			cin >> arrSize;
			cout << "Enter the elements of the array: " << endl;
			int* arr = new int[arrSize];
			while (i < arrSize) {
				cin >> arr[i];
				i++;
			}
			Bob->TaskT(arr, 0,arrSize-1);
			cout << "The array sorted is: " << endl;
			for (int i = 0; i < arrSize; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
		}
			break;
		default:
			cout << "Please enter a different selection" << endl;
			break;
		}
		cout << "Please make an input selection from the following : 'X' to exit" << endl << "'A' for array" << endl << "'V' for vector" << endl << "'F' for user defined functions" << endl << "'P' for pointers" << endl << "'R' for recursion" << endl << "'E' for exception handling" << endl << "'S' for binary search" << endl << "'T' for sorting" << endl;
		cout << "Please enter a option: " << endl;
		cin >> option;
	}

	system("pause");
	return 0;
}