#include <iostream>
#include <vector>

// https://codeforces.com/problemset/problem/1537/A

using namespace std;

int main(void)
{
    int N, L, sum;
    cin >> N;
    while (N--)
    {
        cin >> L;
        sum = 0;
        for (int i = 0; i < L; i++)
        {
            int elem;
            cin >> elem;
            sum += elem;
           
        } 
        if (sum <= 0)
            cout << 1;
        else
        {
            cout << sum - L  <<;
        }
    }
    return 0;
}