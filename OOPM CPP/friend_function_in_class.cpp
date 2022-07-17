#include <iostream>
using namespace std;

class students;

class calculate
{
public:
    int sum(students x1, students y1);
};

class students
{
    int a;
    string s;
    friend int calculate::sum(students x1, students y1);

public:
    void set_data(int x, string y)
    {
        a = x;
        s = y;
    }

};

int calculate::sum(students x1, students y1)
{
    return (x1.a + y1.a);
}
int main()
{
    students a1, a2;
    a1.set_data(1, "shubham");
    a2.set_data(3, "dhangar");
    calculate calc;
    int res = calc.sum(a1, a2);
    cout << res;
}