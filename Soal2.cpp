#include <iostream>
#include <conio.h>
#include <cstring> //untuk std::strlen
#include <cctype>

using namespace std;

string username = "admin001";
string password = "adminN02**";

//function untuk mengecek username
bool check_username(string nilai){
	if(nilai.length() != 8){
		cout <<"panjang karakter harus 8 karakter";
//		system("pause");
		return false;
	}
	else{
		for(int x = 0; x <= nilai.length(); x++){
			if(isupper(nilai[x])){
				cout << "username harus huruf kecil semua\n";
//				system("pause");
				return false;
			}
		}	
	}
	
	return true;
	
}

//function untuk mengecek password
bool check_password(string nilai){
	bool upper = false;
	bool lower = false;
	bool digit = false;
	bool simbol = false;
	
	if(nilai.length() < 8){
		return false;
	}
	else
	{
		for(int x = 0; x < nilai.length(); x++){
			if(isupper(nilai[x])){
				upper = true;
			}
			else if(islower(nilai[x]))
			{
				lower = true;
			}
			else if(password.at(x) == '1' || password.at(x) == '2' || password.at(x) == '3' || password.at(x) == '4' || password.at(x) == '5' || password.at(x) == '6' ||  password.at(x) == '7' || password.at(x) == '8' || password.at(x) == '9' || password.at(x) == '0'){
				digit = true;
			}
			else if(password.at(x) == '!' || password.at(x) == '@' || password.at(x) == '#' || password.at(x) == '$' || password.at(x) == '%' || password.at(x) == '^' || password.at(x) == '&' || password.at(x) == '*' || password.at(x) == '(' || password.at(x) == ')'){
				simbol = true;
			}
		}
		if(!(upper && lower && digit && simbol)){
			return false;
		}
		
	}
	
	return true;
	
}

int main(){
    if(check_username(username)){
    	cout << "username valid\n";
	}else{
		cout << "username not valid\n";
	}
	
	if(check_password(password)){
		cout << "password valid\n";
	}else{
		cout << "password not valid\n";
	}
}
