#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
#include "EHR.h"
using namespace std;

class RMC: public EHR {
protected:
	int u;
public:
	RMC();
	void reading1();
	void reading2();
	void history();
	void reading3();
	void reading4();
	void reading5();
	void reading6();
	void reading7();
	void reading8();
	void reading9();
	void reading10();
	void reading11();
	void reading12();
	void reading13();
	~RMC();	
};
RMC::RMC(){}
void RMC::reading1(){
ifstream filer;
	filer.open ("w1.txt");
		if (filer.is_open()) {
			while (filer.good())
				cout << (char) filer.get();
				filer.close();
			}
ifstream filer1;
	filer1.open ("w2.txt");
		if (filer1.is_open()) {
			while (filer1.good())
				cout << (char) filer1.get();
				filer1.close();
			}
ifstream filer2;
	filer2.open ("w3.txt");
		if (filer2.is_open()) {
			while (filer2.good())
				cout << (char) filer2.get();
				filer2.close();
			}			
ifstream filer5;
	filer5.open ("w5.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}										
}
void RMC::reading2(){
ifstream filer3;
	filer3.open ("w4.txt");
		if (filer3.is_open()) {
			while (filer3.good())
				cout << (char) filer3.get();
				filer3.close();
			}
		}
void RMC::history(){
ifstream filer4;
    filer4.open("history.txt");
		if (filer4.is_open()) {
			while (filer4.good())
				cout << (char) filer4.get();
				filer4.close();
			}
}
void RMC::reading3(){
ifstream filer5;
    filer5.open("p0.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}
void RMC::reading4(){
ifstream filer5;
    filer5.open("p1.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}
void RMC::reading5(){
ifstream filer5;
    filer5.open("p2.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}
void RMC::reading6(){
ifstream filer5;
    filer5.open("p3.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}
void RMC::reading7(){
ifstream filer5;
    filer5.open("p4.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}
void RMC::reading8(){
ifstream filer5;
    filer5.open("p5.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}
void RMC::reading9(){
ifstream filer5;
    filer5.open("p6.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}
void RMC::reading10(){
ifstream filer5;
    filer5.open("p7.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}
void RMC::reading11(){
ifstream filer5;
    filer5.open("p8.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}
void RMC::reading12(){
ifstream filer5;
    filer5.open("p9.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}
void RMC::reading13(){
ifstream filer5;
    filer5.open("p10.txt");
		if (filer5.is_open()) {
			while (filer5.good())
				cout << (char) filer5.get();
				filer5.close();
			}
}	
RMC::~RMC(){}