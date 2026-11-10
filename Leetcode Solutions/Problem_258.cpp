/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 

Constraints:

0 <= num <= 231 - 1
 

Follow up: Could you do it without any loop/recursion in O(1) runtime?
*/
class Solution
{
public:
  int addDigits(int num)
  {
    int rem;
    int sum = 0;
    int ans;
    while (num != 0)
    {
      rem = num % 10;
      sum = sum + rem;
      num = num / 10;
    }
    if (sum >= 10)
    {
      ans = addDigits(sum);
    }
    else
    {
      ans = sum;
    }
    return ans;
  }
};