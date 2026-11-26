#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 10.1. A/student .h"
#include "../Project 10.1. A/student .cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101A
{
    TEST_CLASS(UnitTest101A)
    {
    public:
        TEST_METHOD(TestCalcPercentHighAvg)
        {
            const int N = 4;
            Student s[N] = {
                { "Ivanenko", 1, CS, 5, 5, 5 },  // avg = 5.0 (> 4.5) -> +
                { "Petrenko", 2, INF, 5, 5, 4 }, // avg = 4.67 (> 4.5) -> +
                { "Sydorenko", 1, ME, 4, 4, 5 }, // avg = 4.33 (<= 4.5) -> -
                { "Kovalenko", 3, PI, 3, 4, 4 }  // avg = 3.67 (<= 4.5) -> -
            };

            double expected = 50.0;
            double actual = CalcPercentHighAvg(s, N);

            Assert::AreEqual(expected, actual, 0.01);
        }
    };
}