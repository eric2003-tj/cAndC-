#include <iostream>
using namespace std;
int main() {
	string password;
	cout << "請輸入密碼:";
	cin >> password;
	
	while(password != "5678"){
		cout << "請輸入密碼:";
		cin >> password;		
	}

	cout << "恭喜!您的密碼正確!請進" << endl;
}
