#include<iostream>
using namespace std;

int fac(int a){
	if(a<2)
		return 1;
	
	return a * fac(a-1);
}
int main(){
	int a;
	cout<<"enter the number : ";
	cin>>a;
	cout << fac(a);
	return 0;
}