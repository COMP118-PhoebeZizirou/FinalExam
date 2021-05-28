#include "pch.h"
#include "CppUnitTest.h"
#include "../FinalExam/FinalExam.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace InputUserTest
{
	TEST_CLASS(InputUserTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Arrange

			const int N = 10;
			int arr[N] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };
			int* sumofArray;

			//Act

			*sumofArray = sumArray(arr, N);

			//Assert

			Assert::AreEqual(5, arr[0]);
			Assert::AreNotEqual(34, arr[2]);
			Assert::AreEqual(15, arr[2]);
		}
	};
}
