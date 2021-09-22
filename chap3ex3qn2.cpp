#include<iostream>
using namespace std;
int main()
{
	float fah,cel;
	int x;
	cout<<"\n\ntype 1 to convert fah into cel\n\n type 2 to convert cel into fah";cin>>x;
	if(x==1)
	{
		cout<<"enter temp in fah:";
		cin>>fah;
		cel=5*(fah-32)/9;
		cout<<"temp in celsius is"<<cel;
	
	}
	if(x==2)
	{
		cout<<"enter temp in cel:";
		cin>>cel;
		fah=(9*cel/5)+32;
		cout<<"temp in cel is"<<fah;
		
	}
	
	
	return(0);
	
	
}
