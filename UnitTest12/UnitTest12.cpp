#include "pch.h"
#include "CppUnitTest.h"
#include "../12.4(1)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* L;
			L = NULL;
				int c = Count (L);
				Assert::AreEqual(c, 0);

		}
	};
}
