#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

class Portal {
protected:
	string name;
	int cnic;
	int phone;
public:
	Portal();
	Portal(string n,int c,int p);
	void show();
	void set_name(string n);
    void set_cnic(int c);
    void set_phone(int p);
    string get_name();
    int get_cnic();
    int get_phone();
	~Portal();
};
Portal::Portal() {}
Portal::Portal(string n,int c,int p):name(n),cnic(c),phone(p){}
void Portal::set_name(string n) {
    name = n;
}
void Portal::set_cnic(int c) {
    cnic = c;
}
void Portal::set_phone(int p) {
    phone = p;
}
string Portal::get_name() {
    return name;
}
int Portal::get_cnic() {
    return cnic;
}
int Portal::get_phone() {
    return phone;
}
void Portal::show(){
	cout << "\033[1;33m" << "Name: " << name << endl;
	cout << "CNIC: " << cnic << endl;
	cout << "Phone Number: " << phone << "\033[1;37m" << endl;

}
Portal::~Portal() {}