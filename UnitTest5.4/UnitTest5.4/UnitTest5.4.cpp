#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05_4.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = S0(1, 5);
			Assert::AreEqual(0.0948850217, t, 1e-8);
		}
		TEST_METHOD(TestMethod2)
		{
			double t = S1(1, 5, 1);
			Assert::AreEqual(0.0948850217, t, 1e-8);
		}

		TEST_METHOD(TestMethod3)
		{
			double t = S2(1, 5, 5);
			Assert::AreEqual(0.0948850217, t, 1e-8);
		}

		TEST_METHOD(TestMethod4)
		{
			double t = S3(1, 5, 1, 0);
			Assert::AreEqual(0.0948850217, t, 1e-8);
		}

		TEST_METHOD(TestMethod5)
		{
			double t = S4(1, 5, 5, 0);
			Assert::AreEqual(0.0948850217, t, 1e-8);
		}
	};
}


