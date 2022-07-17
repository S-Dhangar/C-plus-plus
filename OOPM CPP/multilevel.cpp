#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void student :: set_roll_number(int r)
{
    roll_number = r;
}

void student :: get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;
    /* data */
public:
    void set_marks(float, float);
    void get_marks();
};

void exam :: set_marks(float m1, float m2)
{

    maths = m1;
    physics = m2;
}

void exam :: get_marks()
{
    cout << "The marks got in maths are " << maths << endl;
    cout << "The marks got in physics are " << physics << endl;
}

class result : public exam
{
private:
    float percentage;

public:
   
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    result shubham;
    shubham.set_roll_number(537);
    shubham.set_marks(90, 92.5);
    shubham.display();
}