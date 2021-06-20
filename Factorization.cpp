#include <iostream>
#include <fstream>
#define lli long long int
using namespace std;

int print_factors_count(lli N) {
  int cnt = 0;

  for (int i = 1; i <= N; i ++)
    if (N % i == 0)
      cnt ++;

  return cnt;
}

int main() {
  ifstream cin("input.txt");

  int N;
  cin >> N;
  cout << print_factors_count(N);
  
  return 0;
