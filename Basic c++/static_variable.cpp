#include <iostream>
using namespace std;
class shop
{
private:
    int id[100];
    int price[100];
    static int counter;

public:
    void setdata();
    void getdata();
};
int shop::counter;
void shop::setdata()
{
    cout << "enter the id no of book " << counter + 1 << endl;
    cin >> id[counter];
    cout << "enter the price of the book" << endl;
    cin >> price[counter];
    counter++;
}
void shop::getdata()
{    int i=0;
    cout << "the price of " << id[i]<<" no book is ";
    cout << price[i] << endl;
    i++;
}
int main()
{
    shop tarali, sarali, gharali;
    tarali.setdata();
    tarali.getdata();

    sarali.setdata();
    sarali.getdata();

    gharali.setdata();
    gharali.getdata();
    return 0;
}