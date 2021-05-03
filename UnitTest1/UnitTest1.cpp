#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.B\Lab5.1.B\Complex.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.B\Lab5.1.B\MyDerivedException.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.B\Lab5.1.B\MyException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex A(4, -1);
			Complex B(6, -3);

			Complex C = A + B;
			Assert::AreEqual(C.GetRe(), 10.0);
		}
	};
}
