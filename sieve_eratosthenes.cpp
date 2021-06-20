#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(void)
{
    int N = 30;
    vector<bool> is_prime(N + 1, true);

    for (int i = 2 ; (i * i) <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j <= N; j += i) 
                is_prime[j] = false;
        }
    }
    for (int i = 1; i <= N; i++)
        if (is_prime[i])
            cout << i << " ";
    return 0;
}