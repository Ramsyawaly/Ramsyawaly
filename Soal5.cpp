#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

string generate(){
	string random = "";
	static const string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
	
	for(int i=1;i<=32;i++){
		random += text[rand()%text.size()];
	}
	return random;
}

int main(){
	int a;
	cout<<"Input Data : ";cin>>a;
	cout<<endl;
	for(int i=1;i<=a;i++){
		cout<<generate()<<endl;
	}
	return 0;
}

