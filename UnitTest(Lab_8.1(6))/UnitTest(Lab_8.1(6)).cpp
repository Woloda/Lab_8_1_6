#include "pch.h"
#include "CppUnitTest.h"
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab816
{
	TEST_CLASS(UnitTestLab816)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
				string lit_r = "ssqQSfqsSWfs";
				string para = "SQ";
				string para1 = "QS";

				bool b = false;
				if (lit_r.find(para) != -1)
					b = true;
				if (lit_r.find(para1) != -1)
					b = true;

				Assert::AreEqual(b, true);
		}
	};
}
