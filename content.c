main.cpp

#include <iostream>
#include "bmi.h"
using namespace std;

int main() {
	BMI robert;
	robert.name = "徐國堂";
	robert.height = 178.0;
	robert.weight = 78;
	cout << robert.name << "的bmi是" << robert.bmi() << endl;

	BMI jenny;
	jenny.name = "王慧質";
	jenny.height = 160;
	jenny.weight = 51;
	cout << jenny.name << "的bmi是" << jenny.bmi() << endl;
}


bmi.h

#ifndef __BMI_H__
#define __BMI_H__

#include <math.h>
#include <iostream>
using namespace std;

class BMI{
	public:
	string name;
	float height;
	float weight;
	//實體的方法
	float bmi(){
		return weight / pow((height / 100),2);
	}
};


#endif
