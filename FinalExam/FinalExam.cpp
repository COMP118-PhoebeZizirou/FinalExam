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

int main()
{
	int N = 10;		//N -> Size of Array
	int arr[10];	//arr -> Name of Array
	int choice; 

	printmenu();

	cout << "Please enter choice: ";
	cin >> choice;

	if (choice == 1)
		fillArray(arr, N);
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

void fillArray(int *arr, const int N)
{

}