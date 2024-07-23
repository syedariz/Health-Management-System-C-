#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Appointment.h"
using namespace std;

class EHR: public Appointment {
protected:
	string recom;
public:
	EHR();
	void writing1(Portal &P);
	void writing2(Vitals &V,Gmovement &G,Smovement &S);
	void writing3(Appointment &A);
	void writing4(Appointment &A);
	void writing5(Portal &P);
	void writing6(Vitals &V,Gmovement &G,Smovement &S);
	void writing7(Appointment &A);
	void writing8(Appointment &A);
	void setRecom(string input);
	string getRecom();
	void writing9();
	void writing10(string recom);
	void writing11(string recom);
	void writing12(string recom);
	void writing13(string recom);
	void writing14(string recom);
	void writing15(string recom);
	void writing16(string recom);
	void writing17(string recom);
	void writing18(string recom);
	void writing19(string recom);
	~EHR();	
};
EHR::EHR(){}
void EHR::writing1(Portal &P){
	ofstream filew;
	filew.open("w1.txt");
    if (filew.is_open()) {
        filew << "Name: " << P.get_name() << endl;
		filew << "CNIC: " << P.get_cnic() << endl;
		filew << "Phone No.: " << P.get_phone() << endl;
        filew.close(); 
    }
}
void EHR::writing2(Vitals &V,Gmovement &G,Smovement &S){
ofstream filew1;
	filew1.open("w2.txt");
    if (filew1.is_open()) {
        filew1 << "OSL: " << V.getOxygen() << endl;
		filew1 << "Pulse Is: " << V.getPulse() << endl;
		filew1 << "BMI: " << V.getBMI() << endl;
		filew1 << "BP: " << V.getBloodPressure() << endl;
		filew1 << "No. Of Falls: " << G.getFall() << endl;
		filew1 << "Position: " << G.getPosition() << endl;
		filew1 << "No. Of Steps: " << G.getSteps() << endl;
		filew1 << "Check: " << S.getDis() <<endl;
        filew1.close(); 
    }	
}
void EHR::writing3(Appointment &A) {
    ofstream filew2;
    filew2.open("w3.txt");
    if (filew2.is_open()) {
        filew2 << "Call Information: " << A.getTime() << " Mins Duration And Called On " << A.getHour() << ":" << A.getMin() << ":" << A.getSec() << endl;
        filew2.close();
    }
    ofstream filew3;
    filew3.open("w5.txt");
    if (filew3.is_open()) {
        filew3 << "Prescriptions Are: " << A.getPre() << endl;
        filew3.close();
}
}
void EHR::writing4(Appointment &A){
	ofstream filew4;
    filew4.open("w4.txt",ios::app);
    if (filew4.is_open()) {
        filew4 << "Appointment: " << A.getSet() << endl;
        filew4.close();	
}}
void EHR::writing5(Portal &P){
	ofstream filew5;
	filew5.open("history.txt",ios::app);
    if (filew5.is_open()) {
        filew5 << "Name: " << P.get_name() << endl;
		filew5 << "CNIC: " << P.get_cnic() << endl;
		filew5 << "Phone No.: " << P.get_phone() << endl;
        filew5.close(); 
    }
}
void EHR::writing6(Vitals &V,Gmovement &G,Smovement &S){
ofstream filew6;
	filew6.open("history.txt",ios::app);
    if (filew6.is_open()) {
        filew6 << "OSL: " << V.getOxygen() << endl;
		filew6 << "Pulse Is: " << V.getPulse() << endl;
		filew6 << "BMI: " << V.getBMI() << endl;
		filew6 << "BP: " << V.getBloodPressure() << endl;
		filew6 << "No. Of Falls: " << G.getFall() << endl;
		filew6 << "Position: " << G.getPosition() << endl;
		filew6 << "No. Of Steps: " << G.getSteps() << endl;
		filew6 << "Check: " << S.getDis() <<endl;
        filew6.close(); 
    }	
}
void EHR::writing7(Appointment &A) {
    ofstream filew7;
    filew7.open("history.txt",ios::app);
    if (filew7.is_open()) {
        filew7 << "Call Information: " << A.getTime() << " Mins Duration And Called On " << A.getHour() << ":" << A.getMin() << ":" << A.getSec() << endl;
        filew7.close();
    }
    ofstream filew8;
    filew8.open("history.txt",ios::app);
    if (filew8.is_open()) {
        filew8 << "Prescriptions Are: " << A.getPre() << endl;
        filew8.close();
}
}
void EHR::writing8(Appointment &A){
	ofstream filew9;
    filew9.open("history.txt",ios::app);
    if (filew9.is_open()) {
        filew9 << "Appointments: " << A.getSet() << endl;
        filew9 << "---------------------------------------------------------------------" << endl;
        filew9.close();	
}}
void EHR::writing9(){
	ofstream filew10;
    filew10.open("w4.txt",ios::trunc);
    if (filew10.is_open()) {
        filew10.close();	
}
}
string getRecom(){
	return getRecom();
}
void setRecom(string input){
	getRecom()=input;
}
void EHR::writing10(string recom){
	ofstream filew10;
    filew10.open("p1.txt",ios::app);
    if (filew10.is_open()) {
    	filew10 << endl << "ADDITION: " << recom << endl;
        filew10.close();	
}
}
void EHR::writing11(string recom){
	ofstream filew10;
    filew10.open("p2.txt",ios::app);
    if (filew10.is_open()) {
    	filew10 << endl << "ADDITION: " << recom << endl;
        filew10.close();	
}
}
void EHR::writing12(string recom){
	ofstream filew10;
    filew10.open("p3.txt",ios::app);
    if (filew10.is_open()) {
    	filew10 << endl << "ADDITION: " << recom << endl;
        filew10.close();	
}
}
void EHR::writing13(string recom){
	ofstream filew10;
    filew10.open("p4.txt",ios::app);
    if (filew10.is_open()) {
    	filew10 << endl << "ADDITION: " << recom << endl;
        filew10.close();	
}
}
void EHR::writing14(string recom){
	ofstream filew10;
    filew10.open("p5.txt",ios::app);
    if (filew10.is_open()) {
    	filew10 << endl << "ADDITION: " << recom << endl;
        filew10.close();	
}
}
void EHR::writing15(string recom){
	ofstream filew10;
    filew10.open("p6.txt",ios::app);
    if (filew10.is_open()) {
    	filew10 << endl << "ADDITION: " << recom << endl;
        filew10.close();	
}
}
void EHR::writing16(string recom){
	ofstream filew10;
    filew10.open("p7.txt",ios::app);
    if (filew10.is_open()) {
    	filew10 << endl << "ADDITION: " << recom << endl;
        filew10.close();	
}
}
void EHR::writing17(string recom){
	ofstream filew10;
    filew10.open("p8.txt",ios::app);
    if (filew10.is_open()) {
    	filew10 << endl << "ADDITION: " << recom << endl;
        filew10.close();	
}
}
void EHR::writing18(string recom){
	ofstream filew10;
    filew10.open("p9.txt",ios::app);
    if (filew10.is_open()) {
    	filew10 << endl << "ADDITION: " << recom << endl;
        filew10.close();	
}
}
void EHR::writing19(string recom){
	ofstream filew10;
    filew10.open("p10.txt",ios::app);
    if (filew10.is_open()) {
    	filew10 << endl << "ADDITION: " << recom << endl;
        filew10.close();	
}
}
EHR::~EHR(){}