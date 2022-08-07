#include <iostream>

class Square {
public:
  int width; // field,欄位
  double area() { 
		return width * width; 
	}

	int perimeter(){
		return 4 * width;
	}	
};

using namespace std;
int main() {
  Square s1;
  Square s2;
  s1.width = 10;
  s2.width = 20;

  cout << "s1的面積是:" << s1.area() << endl;
	cout << "s1的周長是:" << s1.perimeter() << endl;
	
  cout << "s2的面積是:" << s2.area() << endl;
	cout << "s2的周長是:" << s2.perimeter() << endl;
}
