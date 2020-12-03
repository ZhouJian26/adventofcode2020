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
  int indexRow = 0;
  vector<long long int> result{0, 0, 0, 0, 0};
  for (int i = 0; i < 323; i++)
  {
    cin >> row;

    if (row[indexRow % row.length()] == '#')
      result[0]++;

    if (row[indexRow * 3 % row.length()] == '#')
      result[1]++;

    if (row[indexRow * 5 % row.length()] == '#')
      result[2]++;

    if (row[indexRow * 7 % row.length()] == '#')
      result[3]++;

    if (i % 2 == 0 && row[(indexRow / 2) % row.length()] == '#')
      result[4]++;

    indexRow++;
  }

  printf("%lld %lld %lld %lld %lld\n", result[0], result[1], result[2], result[3], result[4]);

  cout << result[0] * result[1] * result[2] * result[3] * result[4];
}