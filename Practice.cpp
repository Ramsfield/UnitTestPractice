#include "Practice.h"
#include <string>

using std::string;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
void Practice::sortDescending(int & first, int & second, int & third)
{
  while(first < second || second < third || first < third)
  {
    if( first < second )
    {
      int temp = first;
      first = second;
      second = temp;
    }
    if( second < third )
    {
      int temp = second;
      second = third;
      third = temp;
    }
    /*There will be one of four instances in which code will reach this block:
     *
     * 1. The first two if statements fail. So first > second and second > third.
     *    By this definition, first > second > third, therefore first > third and this if statement would fail
     *
     * 2. The first fails and the second succeeds. So first > second and second < third. By this, second and third would be swapped,
     *    therefore we'd be rechecking if( first < second) which we previously stated first > second. This statement would fail
     *
     * 3. The first succeeds and the second fails. So first < second and second > third. By this, first and second would swap and
     *    we'd be rechecking if(second < third) which we previously stated second > third. This statement would fail
     *
     * 4. Both the first and second statements succeed. So first < second and second < third. so we swap first and second first, 
     *    Then swap the second and third, effectively swapping first and third. So we will now be checking if(second < first) which 
     *    because we stated first < second, this check fails.
     *
     * Therefore, this is unreachable code. If I thought it out better last time, I would have realized changing this to `first < second`
     * would have fixed everything and done me well
     */
    /*
    if( first < third )
    {
      int temp = first;
      first = third;
      third = temp;
    }
    */
  }
}

// Receive a string and return whether or not it is strictly a palindrome,
// where it is spelled the same backwards and forwards when considering every
// character in the string, but disregarding case ('x' is the same as 'X')
bool Practice::isPalindrome(string input)
{
  for(int i=0; i < input.size(); i++)
  {
    if( input[i] >= 'a' && input[i] <= 'z' )
    {
      //change lower case to upper case
      input[i] = input[i] - ('a' - 'A');
    }
  }
  for(int i=0; i < input.size()/2; i++)
  {
    if( input[i] != input[input.size()-1-i] )
      return false;
  }
  return true;
}
