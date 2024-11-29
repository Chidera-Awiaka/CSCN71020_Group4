#include "pch.h"
#include "CppUnitTest.h"

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
