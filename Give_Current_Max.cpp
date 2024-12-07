#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    string name;
    int roll;
    int marks;

    Students(string n, int r, int m) : name(n), roll(r), marks(m) {}
};

class studentsDataCompare
{
public:
    bool operator()(Students a, Students b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        return a.marks < b.marks;
    }
};

int main()
{
    int N, Q;
    cin >> N;
    vector<Students> allStudents;

    for (int i = 0; i < N; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        allStudents.push_back(Students(name, roll, marks));
    }

    priority_queue<Students, vector<Students>, studentsDataCompare> jq(allStudents.begin(), allStudents.end());

    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int comand;
        cin >> comand;

        if (comand == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            jq.push(Students(name, roll, marks));

            if (!jq.empty())
            {
                Students top = jq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
        }
        else if (comand == 1)
        {
            // Maximum marks of students
            if (!jq.empty())
            {
                Students top = jq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (comand == 2)
        {
            // Delete max marks std
            if (!jq.empty())
            {
                jq.pop();
            }

            if (!jq.empty())
            {
                Students top = jq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
