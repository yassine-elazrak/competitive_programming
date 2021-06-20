#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

string is_prime(int N) {
  for (int i = 2; i * i <= N; i ++)
    if (N % i == 0) {
      return "no";
    }
  return "yes";
}

int main() {
  ifstream cin("input.txt");
  int T, N;

  cin >> T;
  while (T--) {
    cin >> N;
    cout << is_prime(N) << "\n";
  }
  return 0;
