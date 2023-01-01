#include <iostream>
using namespace std;
// destructor never takes any arguments and no returnh any value and has no type
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

     ~students()
    {
        cout<<"data members are destroying";
        
    }
    
};

void students::display()
{
    cout << "age is " << age << endl
         << "name is " << name << endl;
}
int main()
{
    students s2(21,"shubham");
    s2.display();
    
}