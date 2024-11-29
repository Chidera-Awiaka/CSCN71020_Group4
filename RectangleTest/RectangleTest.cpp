#include "pch.h"
#include "CppUnitTest.h"


extern "C"
{
#include "../PolygonChecker/rectangleSolver.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTest 
{
    TEST_CLASS(RectangleTest)
    {
    public:

        TEST_METHOD(TestRectangleDetection)
        {
            int points[4][2] = { {0, 0}, {0, 2}, {3, 2}, {3, 0} };
            Assert::IsTrue(isRectangle(points));
        }

        TEST_METHOD(TestRectanglePerimeter)
        {
            double perimeter = calculatePerimeter(3.0, 2.0);
            Assert::AreEqual(10.0, perimeter);
        }

        TEST_METHOD(TestRectangleArea)
        {
            double area = calculateArea(3.0, 2.0);
            Assert::AreEqual(6.0, area);
        }
    };
}
