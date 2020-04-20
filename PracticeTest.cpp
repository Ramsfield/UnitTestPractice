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
}

TEST(PracticeTest, is_simple_false_palindrome)
{
    Practice obj;
    //Basic False test
    bool actual = obj.isPalindrome("test");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_symbol_palindrome)
{
    Practice obj;
    //Insert Symbols
    bool actual = obj.isPalindrome("-$$abBA$$-");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_symbol_false_palindrome)
{
    Practice obj;
    //Insert Symbols -- False
    bool actual = obj.isPalindrome("-%&$ ");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_space_palindrome)
{
    Practice obj;
    //Space strings
    bool actual = obj.isPalindrome("          ");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_palindrome)
{
    Practice obj;
    //Empty string
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}
