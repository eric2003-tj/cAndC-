#include <iostream>
#include <time.h>

using namespace std;
int main() {
	int num = 7;
	int lot[49];
	int minIndex = 0;
	int maxIndex = 48;
	int choose[num];

	//建立1~49的值
	for(int i=0; i<49; i++){
		lot[i] = i+1;
	}

	
	srand(time(NULL));
	//建立亂數7次，不會重覆的
	for(int i=0; i<num; i++){
		int randIndex = rand() % (maxIndex-minIndex+1) + minIndex;
		choose[i] = lot[randIndex];
		lot[randIndex] = lot[maxIndex];
		maxIndex -= 1;
	}
	
	cout << "本期大樂透電腦選號號碼如下:" << endl;
	for(int i=0; i<num-1; i++){
		cout << choose[i] << " ";
	}
	cout << endl;

	cout << "特別號是:" << choose[num-1] << endl;
	return 0;
}
