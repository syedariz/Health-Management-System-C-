#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Portal.h"
using namespace std;

class Vitals : public Portal {
protected:
    int oxygen;
    int pulse;
    float BMI;
    int bloodp;
public:
    Vitals();
    void vital();
    ~Vitals();
    void setOxygen(int o);
    void setPulse(int p);
    void setBMI(float bmi);
    void setBloodPressure(int bp);
    int getOxygen();
    int getPulse();
    float getBMI();
    int getBloodPressure();
};
Vitals::Vitals() {}
void Vitals::vital (){
	oxygen=rand() % 11 + 90;
	pulse=rand() % 41 + 60;
	BMI=18.5 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (30.0 - 18.5)));
	bloodp=rand() % 31 + 90;
	cout << "Oxygen Saturation Level: " << oxygen << "%" << endl;
	cout << "Pulse Is: " << pulse << endl;
	cout << "BMI: " << BMI << endl;
	cout << "Blood Pressure Is: " << bloodp << endl;	
}
Vitals::~Vitals() {}
void Vitals::setOxygen(int o) {
    oxygen = o;
}
void Vitals::setPulse(int p) {
    pulse = p;
}
void Vitals::setBMI(float bmi) {
    BMI = bmi;
}
void Vitals::setBloodPressure(int bp) {
    bloodp = bp;
}
int Vitals::getOxygen() {
    return oxygen;
}
int Vitals::getPulse() {
    return pulse;
}
float Vitals::getBMI() {
    return BMI;
}
int Vitals::getBloodPressure() {
    return bloodp;
}