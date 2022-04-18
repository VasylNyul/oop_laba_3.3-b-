#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_3.3(b)/Fraction.h"
#include "../oop_laba_3.3(b)/Pair.h"
#include "../oop_laba_3.3(b)/Fraction.cpp"
#include "../oop_laba_3.3(b)/Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest33
{
	TEST_CLASS(oopUnitTest33)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction a(4, 6), b(1, 2);
			Fraction c = a - b;
			Assert::AreEqual(c.get_a(), 3);
			Assert::AreEqual(c.get_b(), 4);
		}
	};
}
