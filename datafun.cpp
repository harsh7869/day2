#include<iostream>
using namespace std;
struct data{
	int x;
	char c;
	float f;
	
	void printer()
	{
		cout<<x<<endl;
		cout<<c<<endl;
		cout<<f<<endl;
	}
};
int main(){
	struct data d;
	d.x=3;
	d.c='d';
	d.f=1.56;
	d.printer();
	return 0;
}