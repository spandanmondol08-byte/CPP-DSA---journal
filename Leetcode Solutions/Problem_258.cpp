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