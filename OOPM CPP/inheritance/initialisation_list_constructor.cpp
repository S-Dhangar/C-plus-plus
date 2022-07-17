#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    public:
    A(int x,int y):a(x),b(y+x){   /// will call by sequence
        cout<<a<<" "<<b;
    }
};
int main()
{
    A ob(6,7);  
    return 0;
}