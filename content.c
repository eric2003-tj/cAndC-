#include <iostream>
#define RATE 34.54

using namespace std;

int main() {
  double us, nt;
  cout << "請輸入您有多少美金:";
  cin >> us;
  nt = us * RATE;
  cout << "您有" << nt << "台幣" << endl;
}
