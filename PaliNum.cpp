#include <iostream>
#include <string>

using namespace std;
bool palindrome(int num)
{
  /* 1. Turn the # to a string
  2. Iterate through the length of the string
  3. If the string at the current iteration doesn't equal to the string at the end  of our string we confirm that this string/number is not a palindrome and we return false
  4.  If not false and makes it out of the loop we confirm it is a palindrome and we accept*/
  string str = to_string(num);
  int len = str.length();

  for (int i = 0; i < len / 2; i++)
  {
    if (str[i] != str[len - i - 1])
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int num;
  cin >> num;

  if (palindrome(num))
    cout << "true";
  else
    cout << "false";
}
