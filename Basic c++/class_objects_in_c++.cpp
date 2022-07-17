#include <iostream>
using namespace std;
#include <string.h>
class entercode
{
private:
    string s;
 
public:
    void binary();
   void show();
    void check();
};
void entercode::binary()
{
    cout << "enter the code" << endl;
    cin >> s;

}
void entercode::show()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "code is not binary" << endl;
            break;
        }
    }
}
void entercode::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
        cout << s[i];
    }
}

int main()
{
    entercode roll;
    roll.binary();
    roll.show();
    roll.check();
    return 0;
}