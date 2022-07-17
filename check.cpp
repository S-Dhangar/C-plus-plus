#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> mp;
    string str;
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    int a = 1, b = 1;

    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        if (i->first >= 'a' && i->first <= 'z')
        {
            if (i->second > a)
            {

                a = i->second;
            }
        }
        else if(i->first>='0' && i->first<='9')
        {
            if (b < i->second)
            {
                b = i->second;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
    int k = a - b;
    if (k < 0)
    {
        k = -k;
    }
 
    string str2;
    if(a<2 || b<2){
            for(int i=0;i<str.length();i++){
                if(str[i]==' '){
                    str2.push_back('$');
                }
                else{
                    str2.push_back(str[i]);
                }
                
            }
        }
        else{



            for (int i = 0; i < str.length(); i++)
    {
        
        if (str[i] != str[k] )
        {

            if (str[i] == ' ')
            {
                str2.push_back('$');
            }

            else
            {
                str2.push_back(str[i]);
            }
        }
    }

        }
    
   
      cout<<str2;
  
    return 0;
}