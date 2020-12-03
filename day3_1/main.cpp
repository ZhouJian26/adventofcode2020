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
  string row;
  int indexRow = 0, result = 0;
  for (int i = 0; i < 323; i++)
  {
    cin >> row;

    if (row[indexRow * 3 % row.length()] == '#')
      result++;

    indexRow++;
  }
  cout << result;
}
