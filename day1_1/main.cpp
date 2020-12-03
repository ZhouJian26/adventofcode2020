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
  set<int, greater<int>> mySet;
  int input;
  while (true)
  {
    scanf("%d", &input);
    if (mySet.find(2020 - input) != mySet.end())
    {
      printf("%d %d\n", input, 2020 - input);
      printf("%d\n", input * (2020 - input));
      break;
    }
    mySet.insert(input);
  }
}
