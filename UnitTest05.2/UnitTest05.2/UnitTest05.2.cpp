#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05_2/lab_05_2.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest052
{
	TEST_CLASS(UnitTest052)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 0.5;               // a0 = x
			A (0.5, 1, a);                 // a1 = a0 * R
			Assert::AreEqual(1.0 / 48, a, 1e-9);
		}
	};
}
