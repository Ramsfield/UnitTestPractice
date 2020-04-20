/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    //Basic Test
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);

    //Basic False test
    bool actual = obj.isPalindrome("test");
    ASSERT_FALSE(actual);

    //Insert Symbols
    bool actual = obj.isPalindrome("-$$abBA$$-");
    ASSERT_TRUE(actual);

    //Insert Symbols -- False
    bool actual = obj.isPalindrome("-%&$ ");
    ASSERT_FALSE(actual);

    //Space strings
    bool actual = obj.isPalindrome("          ");
    ASSERT_TRUE(actual);

    //Empty string
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}
