#include "pch.h"
#include "CppUnitTest.h"

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
