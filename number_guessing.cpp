#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	cout<<"WELCOME TO NUMBER GUESSING GAME"<<endl;
	int num,guess;
	int tries=0;
	srand(time(0));
	num=rand()%100+1;
	do{
		cout<<"Enter the guess between 1 and 100"<<endl;
		cin>>guess;
		tries++;
		if(guess>num)
			cout<<"HIGH!\n\n";
		else if(guess<num)
			cout<<"LOW!\n\n";
		else
			cout<<"CORRECT,YOU GOT IT IN"<<tries<<"GUESSES";
	}
	while(guess!=num);
	return 0;
	
}
