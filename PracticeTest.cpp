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

//PALINDROME TEST
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

TEST(PracticeTest, is_numerical_palindrome)
{
    Practice obj;
    //Empty string
    bool actual = obj.isPalindrome("1122332211");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_bad_chars)
{
  Practice obj;
  //String with wrong chars
  bool actual = obj.isPalindrome("\x00\x00a\x01b\x01a\x00\x00");
  ASSERT_TRUE(actual);
}

TEST(PracticeTest, string_with_null_char)
{
  Practice obj;
  //String with wrong chars
  bool actual = obj.isPalindrome("a\x00 this is not a correct string");
  ASSERT_FALSE(actual);
}

//BEGIN SORTDESCENDING TESTS
TEST(PracticeTest, simple_sorting_test)
{
  Practice obj;
  int arr[3] = {3, 2, 1};
  obj.sortDescending(arr[0], arr[1], arr[2]);
  //Make sure they're in descending order
  ASSERT_GE(arr[0], arr[1]);
  ASSERT_GE(arr[1], arr[2]);
  ASSERT_GE(arr[0], arr[2]);
}

TEST(PracticeTest, reverse_sorting_test)
{
  Practice obj;
  int arr[3] = {1, 2, 3};
  obj.sortDescending(arr[0], arr[1], arr[2]);
  //Make sure they're in descending order
  ASSERT_GE(arr[0], arr[1]);
  ASSERT_GE(arr[1], arr[2]);
  ASSERT_GE(arr[0], arr[2]);
}

TEST(PracticeTest, negative_sorting_test)
{
  Practice obj;
  int arr[3] = {-1, -2, -3};
  obj.sortDescending(arr[0], arr[1], arr[2]);
  //Make sure they're in descending order
  ASSERT_GE(arr[0], arr[1]);
  ASSERT_GE(arr[1], arr[2]);
  ASSERT_GE(arr[0], arr[2]);
}


TEST(PracticeTest, mixed_sorting_test)
{
  Practice obj;
  int arr[3] = {-1000, 0, 53000};
  obj.sortDescending(arr[0], arr[1], arr[2]);
  //Make sure they're in descending order
  ASSERT_GE(arr[0], arr[1]);
  ASSERT_GE(arr[1], arr[2]);
  ASSERT_GE(arr[0], arr[2]);
}

TEST(PracticeTest, zero_sorting_test)
{
  Practice obj;
  int arr[3] = {0, 0, 0};
  obj.sortDescending(arr[0], arr[1], arr[2]);
  //Make sure they're in descending order
  ASSERT_GE(arr[0], arr[1]);
  ASSERT_GE(arr[1], arr[2]);
  ASSERT_GE(arr[0], arr[2]);
}

TEST(PracticeTest, zero_negative_zero_sorting_test)
{
  Practice obj;
  int arr[3] = {0, -0, 0};
  obj.sortDescending(arr[0], arr[1], arr[2]);
  //Make sure they're in descending order
  ASSERT_GE(arr[0], arr[1]);
  ASSERT_GE(arr[1], arr[2]);
  ASSERT_GE(arr[0], arr[2]);
}
