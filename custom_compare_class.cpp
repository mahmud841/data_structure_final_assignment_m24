#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        // if(a.marks < b.marks) return true;
        // else return false;
        if (a.marks > b.marks)
            // return true; 
            return EXIT_SUCCESS;
        else if (a.marks < b.marks)
            // return false;
            return EXIT_FAILURE;
        else
        {
            if (a.roll < b.roll)
                // return true;
                return EXIT_SUCCESS;
            else
                // false;
                return EXIT_FAILURE;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> p_queue;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student object(name, roll, marks);
        p_queue.push(object);
    }

    while (!p_queue.empty())
    {
        cout << p_queue.top().name << " " << p_queue.top().roll << " " << p_queue.top().marks << endl;
        p_queue.pop();
    }

    return 0;
}