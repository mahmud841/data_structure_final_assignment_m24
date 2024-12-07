#include <bits/stdc++.h>
using namespace std;

void duplicateRemoveAscendingOrder(int T)
{
    while (T--)
    {
        int N;
        cin >> N;
        set<int> removeDuplicates;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            removeDuplicates.insert(x);
        }

        for (auto val : removeDuplicates)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    duplicateRemoveAscendingOrder(T);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     void duplicateRemoveAscendingOrder() {
//         int T;
//         cin >> T;  // Read number of test cases

//         while (T--) {
//             int N;
//             cin >> N;  // Read the size of the list

//             set<int> removeDuplicates;  // Set to store unique values in sorted order
//             for (int i = 0; i < N; ++i) {
//                 int x;
//                 cin >> x;
//                 removeDuplicates.insert(x);  // Insert elements into the set
//             }

//             // Output the sorted unique values
//             for (auto val : removeDuplicates) {
//                 cout << val << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Solution obj;
//     obj.duplicateRemoveAscendingOrder();
//     return 0;
// }
