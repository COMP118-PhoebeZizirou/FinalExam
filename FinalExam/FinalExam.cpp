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

int main()
{
	int N = 10;		//N -> Size of Array
	int arr[10];	//arr -> Name of Array
	int choice; 

	printmenu();

	cout << "Please enter choice: ";
	cin >> choice;

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
	int i;

	//Filling the array to be multiplied of 5's

	for (i = 0; i < N; i++)
		arr[i] = (i+1) * 5;
}

/**	Function <code>ZeroArray</code> makes all elements of array zero
* <BR>
* @param arr The array containg all elements
* @param N	 The size of the array
*/

void ZeroArray(int* arr, const int N)
{
	int i;

	for (i = 0; i < N; i++)
		arr[i] = 0;
}

/**	Function <code>printArray</code> shows array
* <BR>
* @param arr The array containg all elements
* @param N	 The size of the array
*/

void printArray(int* arr, const int N)
{
	int i;

	for (i = 0; i < N; i++)
		cout << arr[i] << " ";
}