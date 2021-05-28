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

const int N = 10; 

void printmenu();

int main()
{
	int arr[N];
	int choice; 

	printmenu();

	cout << "Please enter choice: ";
	cin >> choice;
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