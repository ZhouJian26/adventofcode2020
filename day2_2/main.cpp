#include <vector>
#include <iostream>
#include <bitset>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>
#include <chrono>
#include <ctime>
#include <set>
using namespace std;

int main()
{
  string range, tChar, word;
  int counter;
  int validPass = 0;
  for (int i = 0; i < 1000; i++)
  {
    cin >> range >> tChar >> word;
    counter = 0;

    auto splitter = range.find('-');

    if (word[stoi(range.substr(0, splitter)) - 1] == tChar[0])
      counter++;

    if (word[stoi(range.substr(splitter + 1)) - 1] == tChar[0])
      counter++;

    if (counter == 1)
      validPass++;
  }
  cout << validPass;
}
