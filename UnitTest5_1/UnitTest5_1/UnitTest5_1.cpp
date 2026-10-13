#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05_1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = h(2, 1);

			Assert::AreEqual(3.0, result, 0.0001);
		}
	};
}
