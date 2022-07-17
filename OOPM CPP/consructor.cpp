
#include <iostream>
using namespace std;
class students
{
    int age;
    string name;

public:
    students(int a,string b)
    {
        age = a;
        name = b;
    }
  
    void display();
};

void students::display()
{
    cout << "age is " << age << endl
         << "name is " << name << endl;
}
int main()
{
    students s1(21,"shubham"), s2(22,"dhangar");
    s2.display();
}