#include<iostream>
using namespace std;

int main(){
    union money
{
    /* data */
    int a;
    char b;
    float c;

};
    money my;
    my.a='c';
    cout<<my.a;
}
