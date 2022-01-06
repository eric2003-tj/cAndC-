#include <iostream>
using namespace std;

void sortedArray(int num, int scores[]){
	for(int i=0;i<num-1;i++){		
		for(int j=i+1;j<num;j++){			
			//由小到大排序
			if(scores[i] < scores[j]){
				//2數對調
				int temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			}

		}		
	}
}

int main() {
	int nums[] = {5, 7, 9, 24, 93}; //建立陣列
	sortedArray(5, nums); //排序陣列
	for(int i=0; i<5; i++){ //輸出陣列
		cout << nums[i] << " ";
	}
	cout << endl;
} 
