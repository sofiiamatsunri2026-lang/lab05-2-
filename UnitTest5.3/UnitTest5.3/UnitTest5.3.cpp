#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05_3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = f(1);
			Assert::AreEqual(0.5137850355, t, 1e-8);
		}
	};
}

