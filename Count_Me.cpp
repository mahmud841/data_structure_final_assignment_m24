#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string sentence;
        getline(cin, sentence);

        stringstream ss(sentence);
        map<string, int> countWords;
        string word;
        int maxWordCount = 0;
        string sum;

        while (ss >> word)
        {
            countWords[word]++;
            if (countWords[word] > maxWordCount)
            {
                maxWordCount = countWords[word];
                sum = word;
            }
        }
        cout << sum << " " << maxWordCount << endl;
    }

    return 0;
}
