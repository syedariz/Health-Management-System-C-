#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
#include "RMC.h"
using namespace std;

class Doctor: public RMC {
protected:
	string pass;
	int pin;
	int sel;
public:
	Doctor();
	Doctor(string pa,int pi);
	void setPassword(string pa);
    void setPin(int pi);
    void setSel(int se);
    string getPassword();
    int getPin();
    int getSel();
	~Doctor();		
};
Doctor::Doctor(){}
Doctor::Doctor(string pa,int pi):pass(pa),pin(pi) {}
void Doctor::setPassword(string pa) {
    pass = pa;
}
void Doctor::setPin(int pi) {
    pin = pi;
}
void Doctor::setSel(int se) {
    sel = se;
}
string Doctor::getPassword() {
    return pass;
}
int Doctor::getPin() {
    return pin;
}
int Doctor::getSel() {
    return sel;
}
Doctor::~Doctor() {}