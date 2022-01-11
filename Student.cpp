#include<iostream>
#include"Student.h"
#include<vector>
#include<string>
using namespace std;
void Student::TaskA(int arr[], int x) {
	int count = 0;
	int max=0;
	for (int i = 1; i < x; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	bool* prime = new bool(max);
	memset(prime, 1, sizeof(prime));
	for (int y = 2; y*y <= max; y++) {
		if (prime[y] = true) {
			for (int i = y * 2; i <= max; i += y) {
				prime[i] = false;
			}
		}
	}
	cout << "The primes are: " << endl;
	for (int i = 0; i < x; i++) {
		if (prime[arr[i]]) {
			count++;
			cout << arr[i]<<" ";
		}
	}
	cout << endl << "The number of primes is: " << count<<endl;
}
int Student::TaskV(std::string input) {
	int i = 0;
	while (input[i])
	{
		i++;
	}
	return i;
}
void Student::TaskF(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}
int Student::TaskP(int arr[], int x) {
	int i = 0;
	int arrSum = 0;
	for (i = 0; i < x; i++) {
		arrSum = arrSum + *(arr + i);
	}
	return arrSum;
}
int Student::TaskR(int x) {
	if (x == 0) {
		return 1;
	}
	return x*TaskR(x - 1);
}
double TaskE2(double n, double x, double y)
{
	double mid = (x + y) / 2;
	double mul = mid * mid;
	if ((mul == n) || (abs(mul - n) < 0.00001))
		return mid;
	else if (mul < n)
		return TaskE2(n, mid, y);

	else
		return TaskE2(n, x, mid);
}
void Student::TaskE(double n)
{
	try {
		int x = n;
		if (x >= 0) {
			double i = 1;
			bool found = false;
			while (!found) {
				if (i * i == n) {
					cout  << "The square root is: " << i <<endl;
					found = true;
				}
				else if (i * i > n) {
					double answer = TaskE2(n, i - 1, i);
					cout <<"The square root is: "<< answer << endl;
					found = true;
				}
				i++;
			}
			 
		}
		else {
			throw(x);
		}
	}
	catch(int n){
		cout << "Number was negative please enter a positive number " << endl;
	}
}
void taskT3(int* x, int* y)
{
	int t = *x;
	*x = *y;
	*y = t;
}
int taskT2(int arr[], int x, int y)
{
	int pivot = arr[y]; 
	int i = (x - 1); 
	for (int j = x; j <= y - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++; 
			taskT3(&arr[i], &arr[j]);
		}
	}
	taskT3(&arr[i + 1], &arr[y]);
	return (i + 1);
}
void Student::TaskT(int arr[], int x, int y) {
	if (x < y)
	{

		int z = taskT2(arr, x, y);

		TaskT(arr, x, z - 1);
		TaskT(arr, z + 1, y);

	}
}

int Student::TaskS(int arr[], int y, int z, int x)
{
	if (z >= y) {
		int mid = y + (z - y) / 2;
		if (arr[mid] == x) {
			return mid;
		}
		if (arr[mid] > x) {
			return TaskS(arr, y, mid - 1, x);
		}
			return TaskS(arr, mid + 1, z, x);
	}
	return -1;
}




