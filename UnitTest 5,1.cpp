#include "pch.h"
#include "CppUnitTest.h"
#include "../5,1/5,1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod)
		{
			double t = g(1, 1);
			Assert::AreEqual(0.1585290152, t, 1e-9);
		}
	};
}
