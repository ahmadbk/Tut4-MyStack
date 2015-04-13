#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Stack1/Stack1.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(PushTest)
		{
			CStack1 stack(5);
			int n = 8;
			bool result = stack.push(n);
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(PopTest)
		{
			CStack1 stack(5);
			int n = 8;
			bool insig = stack.push(n);
			int p;
			bool result = stack.pop(p);
			Assert::AreEqual(true, result);
			Assert::AreEqual(n, p);
		}

		TEST_METHOD(isEmptyTest)
		{
			CStack1 stack(5);
			bool result = stack.isEmpty();
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(isFullTest)
		{
			CStack1 stack(5);
			for (int i = 1; i <= 5; i++)
				bool res = stack.push(i);
			bool result = stack.isFull();
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(isPeekTest)
		{
			CStack1 stack(5);
			for (int i = 1; i <= 5; i++)
				bool res = stack.push(i);
			int p;
			bool result = stack.peek(p);
			Assert::AreEqual(true, result);
			Assert::AreEqual(5, p);
		}

	};
}