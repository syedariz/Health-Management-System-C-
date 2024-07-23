#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Gmovement.h"
using namespace std;

class Appointment: public Gmovement{
protected:
	int i;
	int d;
	int time;
	int hour;
	int min;
	int sec;
	string set;
	string pres;
public:
	Appointment();
	void setI(int input);
	void setPre(string input);
	void setD(int input);
	void setTime(int input);
	void setHour(int input);
	void setMin(int input);
	void setSec(int input);
	void setSet(string input);
	string getSet();
	string getPre();
	int getI();
	int getD();
	int getTime();
	int getHour();
	int getMin();
	int getSec();	
	void doctor();
	void select();
	void prescriptions(string b);
	void t();
	~Appointment();	
};
Appointment::Appointment(){}
void Appointment::setI(int input){
    i = input;
}
void Appointment::setD(int input){
    d = input;
}
void Appointment::setTime(int input){
    time = input;
}
void Appointment::setHour(int input){
    hour = input;
}
void Appointment::setMin(int input){
    min = input;
}
void Appointment::setSec(int input){
    sec = input;
}
void Appointment::setSet(string input){
    set = input;
}
void Appointment::setPre(string input){
    pres = input;
}
int Appointment::getI(){
    return i;
}
string Appointment::getSet(){
    return set;
}
string Appointment::getPre(){
    return pres;
}
int Appointment::getD(){
    return d;
}
int Appointment::getTime(){
    return time;
}
int Appointment::getHour(){
    return hour;
}
int Appointment::getMin(){
    return min;
}
int Appointment::getSec(){
    return sec;
}

void Appointment::doctor(){
ifstream file1;
	file1.open ("doctor.txt");
		if (file1.is_open()) {
			while (file1.good())
				cout << (char) file1.get();
				file1.close();
			}
		cout << endl;	
}
void Appointment::select(){
	cout << "Select A Doctor: ";
	cin >> d;
	if (d>=1 && d<=5){
	cout << "1.Request Appointment/Make Call" << endl;
	cin >> i;
	if (i==1){
		int f;
		f=rand()%5;
		if (f==1){
		cout << "Doctor Is Availible On: " << endl;
		ifstream file2;
		file2.open ("d1.txt");
			if (file2.is_open()) {
			while (file2.good())
				cout << (char) file2.get();
				file2.close();
		}
	cout << endl << "Set Appointment: ";
	cin.ignore();
	getline(cin,set);		
	cout << endl;
	}
	else if (f==2){
		cout << "Doctor Is Availible On: " << endl;
		ifstream file3;
		file3.open ("d2.txt");
			if (file3.is_open()) {
			while (file3.good())
				cout << (char) file3.get();
				file3.close();
			}
	cout << endl << "Set Appointment: ";
	cin.ignore();
	getline(cin,set);	
	cout << endl;
	}
	else if (f==3){
		cout << "Doctor Is Availible On: " << endl;
		ifstream file4;
		file4.open ("d3.txt");
			if (file4.is_open()) {
			while (file4.good())
				cout << (char) file4.get();
				file4.close();
			}
	cout << endl << "Set Appointment: ";
	cin.ignore();
	getline(cin,set);		
	cout << endl;
	}
	else if (f==4){
		cout << "Doctor Is Availible On: " << endl;
		ifstream file5;
		file5.open ("d4.txt");
			if (file5.is_open()) {
			while (file5.good())
				cout << (char) file5.get();
				file5.close();
			}
	cout << endl << "Set Appointment: ";
	cin.ignore();
	getline(cin,set);	
	cout << endl;
	}
	else if (f==5){
		cout << "Doctor Is Availible On: " << endl;
		ifstream file6;
		file6.open ("d5.txt");
			if (file6.is_open()) {
			while (file6.good())
				cout << (char) file6.get();
				file6.close();
			}
	cout << endl << "Set Appointment: ";
	cin.ignore();
	getline(cin,set);			
	cout << endl;
	}
}
}}
void Appointment::t(){
	cout << "Calling Doctor...." << endl;
	time=rand() % 60;
	hour=rand() % 24;
	min=rand() % 60;
	sec= rand() % 60;
	cout << "Call: " << time << " Mins Duration And Called On " << hour << ":" << min << ":" << sec << endl;
}
void Appointment::prescriptions(string b){
	pres = b;
	cout << "Prescriptions Added " << endl;
	}
Appointment::~Appointment(){}