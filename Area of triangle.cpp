#include <iostream>
using namespace std;
int main()
{
	float height,base,area;
	cout<<"Enter the height of triangle"<<endl;
	cin>>height;
	cout<<"Enter the base of triangle"<<endl;
	cin>>base;
	area=height/base*2;
	cout<<"Area of triangle = "<<area;
	return 0;
}