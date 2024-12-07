#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    multiset<int> queries;

    for (int i = 0; i < N; i++)
    {
        int value;
        cin >> value;
        queries.insert(value);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int comand;
        cin >> comand;

        if (comand == 0)
        {
            int X;
            cin >> X;
            queries.insert(X);
            if (!queries.empty())
            {
                cout << *queries.begin() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }

        else if (comand == 1)
        {
            if (!queries.empty())
            {
                cout << *queries.begin() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }

        else if (comand == 2)
        {
            if (!queries.empty())
            {
                queries.erase(queries.begin());
                if (!queries.empty())
                {
                    cout << *queries.begin() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
