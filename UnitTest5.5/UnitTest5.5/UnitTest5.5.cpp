#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			int t = ways(3, 1, 2, 3, 1, depth);
			Assert::AreEqual(4, t);
			Assert::AreEqual(4, depth);
		}

		TEST_METHOD(TestMethod2)
		{
			int depth = 0;
			int t = ways(2, 3, 4, 5, 1, depth);
			Assert::AreEqual(0, t);
			Assert::AreEqual(2, depth);
		}
	};
}
