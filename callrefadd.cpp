#include<iostream>
using namespace std;
void call_by_refrence_address(int& n){
	cout<<"address of n in call_by refrence add :"<<&n<<endl;
	n *= n;
	
}
int main(){
	int n=8;
	cout<<"address of n in main() :"<<&n<<endl;
	call_by_refrence_address(n);
	
	cout<<"ans :"<<n<<endl;
	cout<<"value of n :"<<n<<endl;
	return 0;
}