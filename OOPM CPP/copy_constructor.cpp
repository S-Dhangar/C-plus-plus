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
   students()
    {
        age = 20;
        name = "sd";
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
    s1.display();
    s2.display();
    students s3(s1);
    s3.display();
}