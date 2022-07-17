
/*
1. Default visibility mode is private
2. public visibility mode: public members of base class becomes public members
of the derived class.
3. Private visibility mode: public members of the base class becomes private members
of the derived class.
4. private members are never inherited.
*/

#include <iostream>
using namespace std;

class parent
{
    string surname;
    int wealth;

public:
    int money = 2000;

    int get_data()
    {
        wealth = 50000;
        return wealth;
    }
    string get_data1()
    {
        surname = "Dhangar";
        return surname;
    }
};
class child : public parent
{
private:
    int wealth1;

public:
    void get_data2()
    {

        wealth1 = get_data() + money;
    }

    void display()
    {
        cout << get_data1() << " has " << wealth1 << " wealth";
    }
};

int main()
{
    parent s;
    s.get_data();

    child sd;
    // cout<<sd.get_data()<<endl;    it will throw no error because it is public
    // but in case of private it will throw an erro because all public members become private
    // then we will only use them witth another
    sd.get_data2();
    sd.display();
    return 0;
}