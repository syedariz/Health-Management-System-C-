#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Smovement.h"
using namespace std;

class Gmovement : public Smovement {
protected:
	int steps;
	int position;
	int fall;
public:
	Gmovement();
	void gmovement();
	void setSteps(int steps);
    int getSteps() const;
    void setPosition(int position);
    int getPosition() const;
    void setFall(int fall);
    int getFall() const;
	~Gmovement();	
};
Gmovement::Gmovement(){}
void Gmovement::setSteps(int steps) {
    this->steps = steps;
}
int Gmovement::getSteps() const {
    return steps;
}
void Gmovement::setPosition(int position) {
    this->position = position;
}
int Gmovement::getPosition() const {
    return position;
}
void Gmovement::setFall(int fall) {
    this->fall = fall;
}
int Gmovement::getFall() const {
    return fall;
}
void Gmovement::gmovement(){
	steps=rand() % 2000;
	position=rand() % 120;
	fall=rand() % 2;
	if (fall==1)
		cout << "Number Of Falls Today: " << fall << endl;
	else
		cout << "Number Of Falls Today: No Falls Detected " << endl;
	cout << "Number Of Steps Taken Today: " << steps << endl;
	if (position>60)	
	cout << "Position: Sitting For " << position << " Mins (Sitting For Too Long--Change Position)" << endl;
	else
	cout << "Position: Sitting For " << position << " Mins (Position Is Safe)" << endl;
	}
Gmovement::~Gmovement(){}