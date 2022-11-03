#include "pch.h"
#include "CppUnitTest.h"
#include "../5.0/5.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest50
{
	TEST_CLASS(UnitTest50)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double g;
			g = h(-1, 2, -3);
			Assert::AreEqual(g, -0,1);
		}
	};
}
