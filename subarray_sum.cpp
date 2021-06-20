#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    int N, Q, sum;
    sum = 0;
    cin >> N >> Q;
    vector<int> v(N, 0);
    for (int i = 0; i < N; i++)
    {
        int elem;
        cin >> elem;
        sum += elem;
        v[i] = sum;
    }
    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        --l;
        --r;
        if (l > 1)
            l--;
        cout << v[r] - v[l] << " " ;
    }
    cout <<"\n";
    return 0;
}