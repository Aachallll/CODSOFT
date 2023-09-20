#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char op;
	cout<<"enter the operator(+,-,*,/)"<<endl;
	cin>>op;
	cout<<"enter the numbers"<<endl;
	cin>>num1>>num2;
	switch(op){
		case '+' :
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
			break;
		case '-' :
			cout<<num1<<"-"<<num2<<"="<<num1-num2;
			break;
		case '*':
			cout<<num1<<"*"<<num2<<"="<<num1*num2;
			break;
		case '/':
			cout<<num1<<"/"<<num2<<"="<<num1/num2;
			break;
		default :
			cout<<"wrong operator!"<<endl;
			break;
	}
	return 0;
}
