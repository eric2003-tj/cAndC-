#include <iostream>
using namespace std;

int main() {
  int scores[3] = {70, 80, 90};
  //錯誤的寫法
  //int scores[3];
  //scores = {70, 80, 90};
  cout << scores[0] << "," << scores[1] << "," << scores[2];
  return 0;
}
