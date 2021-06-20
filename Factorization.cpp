#include <iostream>
#include <algorithm>

#define lli long long int;
using namespace std;

string is_prime(int N)
{
    for(int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
            return "no";
    }
    return "yes";
    
}

int main(void){
    int T, N;
    
    cin >> T;
    while (T--)
    {
        cin >> N;
        cout << is_prime(N) << "\n";
    }
    return 0;
}