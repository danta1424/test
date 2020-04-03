#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <algorithm>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
          
            int n = 5;
            int arr[5] = { 1,3,5,7,9 };
            int max1 = 0, pre = 0;
			for (int i = 0; i < n; ++i) {
				max1 = max(max1, pre = pre > 0 ? pre + arr[i] : arr[i]);
			}
            int real = 25;
            Assert::AreEqual(max1, real);
		}
		TEST_METHOD(TestMethod2) {
			int n = 5;
			int arr[5] = { -1,3,-2,7,-3};
			int max1 = 0, pre = 0;
			for (int i = 0; i < n; ++i) {
				max1 = max(max1, pre = pre > 0 ? pre + arr[i] : arr[i]);
			}
			int real = 8;
			Assert::AreEqual(max1, real);

		}
	};
}
