#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter you age please : ";
	cin>>a;
	if(a>18){
		cout<<" you can get party pass";
	}
	else if(a=18){
		cout<<" you are a kid and you can get a kid pass";
	}
	else{
		cout<<"you can not come to your party";
	}
	return 0;
}
