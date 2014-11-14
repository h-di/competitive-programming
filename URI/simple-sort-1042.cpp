// author: Rodrigo Alves
// Judge: URI
// problem: Simple Sort
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1004
// status: AC
#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);

  vector<int> numbers;
  numbers.push_back(A);
  numbers.push_back(B);
  numbers.push_back(C);

  sort(numbers.begin(), numbers.end());

  for (int i = 0; i < 3; i++) {
    printf("%d\n", numbers[i]);
  }

  return 0;
}
