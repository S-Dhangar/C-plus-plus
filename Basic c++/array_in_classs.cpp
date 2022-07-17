#include <iostream>
using namespace std;
class shop
{
private:
    int id[100];
    int price[100];
    int counter = 0;

public:
    void setdata();
    void getdata();
};
void shop::setdata()
{
    cout << "enter the id no of book " << counter + 1 << endl;
    cin >> id[counter];
    cout << "enter the price of the book" << endl;
    cin >> price[counter];
    counter++;
}
void shop::getdata()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of " << id[i] << "no book is ";
        cout << price[i] << endl;
    }
}
int main()
{
    shop tarali;
    tarali.setdata();
    tarali.setdata();
    tarali.setdata();
    tarali.getdata();
    return 0;
}