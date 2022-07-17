// operator overloading
 #include<iostream>
using namespace std;
class book
{
	public:
char aname[20];
		char bname[20];
};
class publisher
{
	public:
	float price;
	book b;
void read_details()
	{
		cout<<"\n Input the name of book ==  ";
		cin>>b.bname;
		cout<<"\n Input the author name of book ==  ";
		cin>>b.aname;
		cout<<"\n Input the price of book == ";
		cin>>price;
	}

	void print_details()
	{
		cout<<"\n BOOK NAME ==  "<< b.bname;
		cout<<"\n AUTHOR NAME == "<<b.aname;
		cout<<"\n PRICE ==  "<<price;
	}
};



int main()
{
	publisher p1;
	p1.read_details();
	cout<<endl;
	p1.print_details();
return(0);
}