#include "pch.h"
#include "CppUnitTest.h"
extern "C"
{
#include "../PolygonChecker/triangleSolver.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TriangleTest
{
    TEST_CLASS(TriangleTest)
    {
    public:

        TEST_METHOD(TestEquilateralTriangle)
        {
            Assert::AreEqual("Equilateral triangle", analyzeTriangle(5, 5, 5));
        }

        TEST_METHOD(TestIsoscelesTriangle)
        {
            Assert::AreEqual("Isosceles triangle", analyzeTriangle(5, 5, 3));
        }

        TEST_METHOD(TestScaleneTriangle)
        {
            Assert::AreEqual("Scalene triangle", analyzeTriangle(3, 4, 5));
        }

        TEST_METHOD(TestNotATriangle)
        {
            Assert::AreEqual("Not a triangle", analyzeTriangle(1, 2, 3));
        }
    };
}