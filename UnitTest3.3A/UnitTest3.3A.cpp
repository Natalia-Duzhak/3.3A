#include "pch.h"
#include "CppUnitTest.h"
#include "../Project3.3/Money.h"
#include "../Project3.3/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a;
			bool k = a.getk500();
			Assert::AreEqual(k,false);

		}
	};
}
