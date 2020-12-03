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
  set<int, greater<int>> mySetInput;
  map<int, vector<int>> myMapSum;
  int input;
  while (true)
  {
    scanf("%d", &input);

    auto iterSum = myMapSum.find(2020 - input);

    if (iterSum != myMapSum.end())
    {
      printf("%d %d %d\n", (iterSum->second)[0], (iterSum->second)[1], input);
      printf("%d\n", (iterSum->second)[0] * (iterSum->second)[1] * input);
      break;
    }

    for (auto iter = mySetInput.begin(); iter != mySetInput.end(); iter++)
    {
      myMapSum.insert(pair<int, vector<int>>((*iter) + input, {*iter, input}));
    }

    mySetInput.insert(input);
  }
}
