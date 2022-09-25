#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check(char a)
{
	if (a == '+' || a == '-')
	{
		return 2;
	}

	if (a == '^')
	{
		return 1;
	}

	if (a == '*' || a == '/')
	{
		return 3;
	}

	return 0;
}
int main()
{
	// your code goes here

	string str;

	string str1 = "(";

	string str2;

	getline(cin, str);
	str=str+')';

	int j = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '^' || str[i] == '-' || str[i] == '+' || str[i] == '*' || str[i] == '/')
		{

			while (check(str[i]) <= check(str1[j]))
			{

				str2.push_back(str1[j]);
				str1.pop_back();
				j--;
			}
			str1 = str1 + str[i];
			j++;
		}
		else if (str[i] == ')')
		{

			while (str1[j] != '(')
			{
				str2 = str2 + str1[j];

				j--;
				str1.pop_back();
			}
			str1.pop_back();
			j--;
		}
		else
		{
			if (str[i] == '(')
			{
				
				str1.push_back(str[i]);
				j++;
			}
			else
				str2 = str2 + str[i];
		}
	}
	cout << str2;

	cout<<endl<<"After solving this we will get ";
	int arr[20];
	int top=-1;
	for(int i=0;i<str2.length();i++){
		if (str2[i] == '^' || str2[i] == '-' || str2[i] == '+' || str2[i] == '*' || str2[i] == '/')
		{
			if(str2[i]=='+'){
				arr[top-1]=arr[top-1]+arr[top];
				top--;
			}
			if(str2[i]=='-'){
				arr[top-1]=arr[top-1] - arr[top];
				top--;
			}
			if(str2[i]=='*'){
				arr[top-1]=arr[top-1] * arr[top];
				top--;
			}
			if(str2[i]=='/'){
				arr[top-1]=arr[top-1] / arr[top];
				top--;
			}
			if(str2[i]=='^'){
				arr[top-1]=pow(arr[top-1],arr[top]);
				top--;
			}
			
			
		}
		else{
			top++;
			arr[top]=str2[i]-'0';
			
		}
	}

cout<<arr[top];




	return 0;
}
