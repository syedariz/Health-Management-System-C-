#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Vitals.h"
using namespace std;

class Smovement : public Vitals {
protected:
	double move;
	string dis;
public:
	Smovement();
	void detect();
	double getMove() const;
    void setMove(double newMove);
    string getDis() const;
    void setDis(const string& newDis);
	~Smovement();			
};
Smovement::Smovement(){}
void Smovement::detect(){
	move= rand() % 5;
	if (move>4){
		dis= "Detecting Syptoms Of Parkinson's Disease--Visit A Doctor";
		cout << dis << endl;	
}
	else
		dis="No Signs Of Any Dieseases--You Are Safe";
		cout << dis << endl;	
}
double Smovement::getMove() const {
    return move;
}
void Smovement::setMove(double newMove) {
    move = newMove;
}
string Smovement::getDis() const {
    return dis;
}
void Smovement::setDis(const string& newDis) {
    dis = newDis;
}
Smovement::~Smovement(){}