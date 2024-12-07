#include <bits/stdc++.h>
using namespace std;

bool sortPairAscendDescending(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main()
{
    int N;
    cin >> N;
    vector<pair<string, int>> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    sort(A.begin(), A.end(), sortPairAscendDescending);
    for (auto &j : A)
    {
        cout << j.first << " " << j.second << endl;
    }

    return 0;
}
