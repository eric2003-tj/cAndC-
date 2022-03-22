#include <iostream>
#include <math.h>
using namespace std;

class BMI{
	public:
	string name;
	int weight;
	int height;
	BMI(string name, int weight, int height);
	float getBMI();
    string suggestion();
};

BMI::BMI(string name, int weight, int height){
	this->name = name;
	this->weight = weight;
	this->height = height;
}

float BMI::getBMI(){
	return weight / pow(height/100.0, 2);
}

string BMI::suggestion(){
    float bmi = getBMI();
    string message;
    if(bmi<18.5){
       message = "體重過輕";
	}else if(bmi < 24){
       message = "正常範圍";
	}else if(bmi < 27){
       message = "過重";
	}else if(bmi < 30){
       message = "輕度肥胖";
	}else if(bmi < 35){
       message = "中度肥胖";
	}else{
       message = "重度肥胖";
	}
    return message;
}



int main() {
	
	string name;
	int weight;
	int height;
	cout << "input your name:";
	cin >> name;
	cout << "input weight(kg):";
	cin >> weight;
	cout << "input height(cm):";
	cin >> height;
	
	
	BMI p1(name,weight,height);
    cout << p1.name << endl;
	cout << p1.getBMI() << endl;
	cout << p1.suggestion() << endl;

	
}
