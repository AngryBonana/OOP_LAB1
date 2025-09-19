#include "gtest/gtest.h"
#include <gtest/gtest.h>
#include "../include/countFractures.h"

TEST(CountFracturesTest, test_01)
{
    // Arrange
    unsigned int n = 0;
    unsigned int m = 0;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 0);
}


TEST(CountFracturesTest, test_02)
{
    // Arrange
    unsigned int n = 1;
    unsigned int m = 0;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 0);
}


TEST(CountFracturesTest, test_03)
{
    // Arrange
    unsigned int n = 0;
    unsigned int m = 1;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 0);
}


TEST(CountFracturesTest, test_04)
{
    // Arrange
    unsigned int n = 1;
    unsigned int m = 1;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 0);
}


TEST(CountFracturesTest, test_05)
{
    // Arrange
    unsigned int n = 2;
    unsigned int m = 1;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 1);
}


TEST(CountFracturesTest, test_06)
{
    // Arrange
    unsigned int n = 5;
    unsigned int m = 3;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 14);
}


TEST(CountFracturesTest, test_07)
{
    // Arrange
    unsigned int n = 10;
    unsigned int m = 11;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 109);
}


TEST(CountFracturesTest, test_08)
{
    // Arrange
    unsigned int n = 8;
    unsigned int m = 7;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 55);
}


TEST(CountFracturesTest, test_09)
{
    // Arrange
    unsigned int n = 4;
    unsigned int m = 6;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 23);
}


TEST(CountFracturesTest, test_10)
{
    // Arrange
    unsigned int n = 2345;
    unsigned int m = 3453;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 8097284);
}


TEST(CountFracturesTest, test_11)
{
    // Arrange
    unsigned int n = 67;
    unsigned int m = 23;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 1540);
}


TEST(CountFracturesTest, test_12)
{
    // Arrange
    unsigned int n = 6575;
    unsigned int m = 1;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 6574);
}


TEST(CountFracturesTest, test_13)
{
    // Arrange
    unsigned int n = 1;
    unsigned int m = 3455;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 3454);
}


TEST(CountFracturesTest, test_14)
{
    // Arrange
    unsigned int n = 17;
    unsigned int m = 5;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 84);
}


TEST(CountFracturesTest, test_15)
{
    // Arrange
    unsigned int n = 2;
    unsigned int m = 20;

    // Act
    unsigned int res = countFractures(n, m);

    // Assert
    ASSERT_EQ(res, 39);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}