/** \file FinalExam.cpp
*   \brief Final Exam Project
*   \details Array of integers to calculate sum and have showing other options as well
*	\author Phoebe Zizirou
*	\version 0.1
*	\date 2021-2021
*	\copyright UNIC
*/

#include<iostream>
#include<cassert>

using namespace std;

void printmenu();

void fillArray(int *arr, const int N);

void ZeroArray(int* arr, const int N);

void printArray(int* arr, const int N);

int sumArray(int* arr, const int N);

int main()
{
	int N = 10;		//N -> Size of Array
	int arr[10];	//arr -> Name of Array
	int choice; 


	//Initialize array with 0 - Branch1

	for (int i = 0; i < N; i++)
	{
		arr[i] = 0;
	}

	printmenu();

	cout << "Please enter choice: ";
	cin >> choice;

	if (choice == 5)
	cout << "Have a nice day :) Bye!" << endl;

	while (choice != 5)
	{
		//Checking user's input to be correct

		while (choice < 1 || choice>5)
		{
			cout << "Wrong input. Please enter choice again: ";
			cin >> choice;
		}

		if (choice == 1)
			fillArray(arr, N);

		else if (choice == 2)
			ZeroArray(arr, N);

		else if (choice == 3)
			printArray(arr, N);

		else if (choice == 4)
			cout << "Sum of Array is: " << sumArray(arr, N); \

		cout << endl;

		printmenu();

		cout << "Please enter choice: ";
		cin >> choice;
	}

    if (choice == 5)
	cout << "Have a nice day :) Bye!" << endl;

return 0;
}

/** Function <code>printmenu</code> prints menu of actions of FinalExam
*	<BR>
*/
 
void printmenu()
{
	cout << "1) Enter data in array" << endl;
	cout << "2) Make all elements of array zero" << endl;
	cout << "3) Show array" << endl;
	cout << "4) Sum of all elements of the array" << endl;
	cout << "5) Exit" << endl;
}

/**	Function <code>fillArray</code> adds data to the array
* <BR>
* @param arr The array containg all elements
* @param N	 The size of the array
*/

void fillArray(int *arr, const int N)
{
	//Test pre-condition
	assert(N > 0);

	int i;

	//Filling the array to be multiplied of 5's

	for (i = 0; i < N; i++)
		arr[i] = (i+1) * 5;

	//Test post-condition
	assert(N == 10);
}

/**	Function <code>ZeroArray</code> makes all elements of array zero
* <BR>
* @param arr The array containg all elements
* @param N	 The size of the array
*/

void ZeroArray(int* arr, const int N)
{
	//Test pre-condition
	assert(N > 0);

	int i;

	for (i = 0; i < N; i++)
		arr[i] = 0;

	//Test post-condition
	assert(N == 10);
}

/**	Function <code>printArray</code> shows array
* <BR>
* @param arr The array containg all elements
* @param N	 The size of the array
*/

void printArray(int* arr, const int N)
{
	//Test pre-condition
	assert(N > 0);

	int i;

	for (i = 0; i < N; i++)
		cout << arr[i] << " ";

	cout << endl;

	//Test post-condition
	assert(N == 10);
}

/**	Function <code>printArray</code> Function that sums all the elements of the array
* <BR>
* @param arr The array containg all elements
* @param N	 The size of the array
* @return	 Returns the sum of the array
*/

int sumArray(int* arr, const int N)
{
	//Test pre-condition
	assert(N > 0);

	int i;
	int count = 0;

	for (i = 0; i < N; i++)
	{
		count+=arr[i];
	}

	//Test post-condition
	assert(N == 10);

	return count;
}