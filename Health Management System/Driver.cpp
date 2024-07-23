#include <iostream>

#include <cstdlib>

#include <fstream>

#include <string>

#include <iomanip>

#include <ctime>

#include <windows.h>

#include "Doctor.h"

using namespace std;

int main() {
    int a, s, c, p, e, t;
    string n, b;
    int g = 0, m = 0;
    EHR E1, E2;
    system("Color 0");
    cout << "\033[1;35m" << "NOTE: PROGRAM WILL ONLY RUN ONCE FOR EITHER PATIENT OR DOCTOR" << "\033[1;34m" << endl;
	cout << "Who Are You: " << endl;
    cout << "1.Patient    /    2.Doctor" << "\033[1;37m" << endl;
    cin >> a;
    if (a == 1) {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, n);
        cout << "Enter CNIC: ";
        cin >> c;
        cout << "Enter Phone Number: ";
        cin >> p;
        Portal P1(n, c, p);
        system("cls");
        cout << "\033[1;34m" << "******************************************************************************************** (PATIENT PORTAL) *********************************************************************************************" << "\033[1;37m" << endl;
        P1.show();
        cout << endl;
        cout << "Thank You For Logging In For Daily Checkup" << endl;
        cout << "What Do You Want To Do: " << endl;
        while (g < 1) {
            cout << "1.Check IoT Sensors    /    2.View Your Records     /     3.Exit" << endl;
            cin >> e;
            if (e == 1) {
                g++;
                cout << "1.Take Full Measure And Vital Check" << endl;
                cin >> t;
                if (t == 1) {
                    char a;
                    Vitals V1;
                    V1.vital();
                    E1.writing1(P1);
                    Gmovement G1;
                    G1.gmovement();
                    Smovement S1;
                    S1.detect();
                    E1.writing2(V1, G1, S1);
                    E1.writing5(P1);
                    E1.writing6(V1, G1, S1);
                    cout << endl << "Do you Want To Make An Appointment(Y/N): ";
                    cin >> a;
                    if (a == 'Y') {
                        char w;
                        Appointment A1, A2, A3, A4;
                        A1.doctor();
                        A2.select();
                        A3.t();
                        cout << "Write Prescription: ";
                        cin.ignore();
                        getline(cin, b);
                        A3.prescriptions(b);
                        g++;
                        E2.writing3(A3);
                        E2.writing4(A2);
                        E2.writing7(A3);
                        E2.writing8(A2);
                        cout << "Do You Want To Run Again(Y/N): ";
                        cin >> w;
                        if (w == 'Y') {
                            g -= 2;
                        } else
                            return 0;
                    } else {
                        g--;
                    }
                }
            } else if (e == 2) {
                RMC R1;
                R1.reading1();
                R1.reading2();
                g--;
            } else {
                exit(0);
            }
        }
    } else {
        int pass;
        int loginAttempt = 0;
        string user;
        while (loginAttempt < 1) {
            cout << "Enter Username: ";
            cin >> user;
            cout << "Enter Password: ";
            cin >> pass;

            if (user == "jawad" && pass == 2580) {
                loginAttempt++;

            } else if (user == "rashid" && pass == 333) {
                loginAttempt++;

            } else {
                cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
            }
        }
        int j, l = 0;
        Doctor D1;
        cout << "\033[1;34m" << "What Do You Want To Do: " << "\033[1;37m" << endl;
        while (l < 1) {
            cout << "1.Check Appointments    /    2.View Recent Patient Records    /    3.View All Patients Records    /    4.Exit" << endl;
            cin >> j;
            if (j == 1) {
                l++;
                RMC RR;
                RR.reading2();
                char v;
                cout << "\033[1;34m" << "Do You Want To Accept All Apointments (Y/N): " << "\033[1;37m";
                cin >> v;
                if (v == 'Y') {
                    cout << "Appointments Accepted Successfully" << endl;
                    EHR H1;
                    H1.writing9();
                    l--;
                } else {
                    cout << "All Appointments Rejected" << endl;
                    EHR H1;
                    H1.writing9();
                    l--;
                }
            } else if (j == 2) {
                int p;
                int l = 0;
                string u;
                while (l < 1) {
                    cout << "Record Protected" << endl;
                    cout << "Enter Password: ";
                    cin >> p;
                    if (p == 2580) {
                        l++;
                    } else {
                        cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                    }
                }
                RMC R5;
                char c;
                R5.reading1();
                cout << "View All History(Y/N): ";
                cin >> c;
                if (c == 'Y') {
                    RMC R6;
                    R6.history();
                } else {

                }
            } else if (j == 3) {
                l++;
                string r;
                char q;
                int z, x, y;
                RMC R7;
                EHR H2;
                R7.reading3();
                cout << endl << "Whos Records To Access: ";
                cin >> z;
                if (z == 1) {
                    while (y < 1) {
                        cout << "Record Protected" << endl;
                        cout << "Enter Password: ";
                        cin >> x;
                        if (x == 2580) {
                            R7.reading4();
                            y++;
                        } else {
                            cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                        }
                        cout << endl << "Do You Want To Add Recommendations(Y/N): ";
                        cin >> q;
                        if (q == 'Y') {
                            cin.ignore();
                            getline(cin, r);
                            H2.writing10(r);
                        } else {
                            l--;
                        }
                    }
                } else if (z == 2) {
                    while (y < 1) {
                        cout << "Record Protected" << endl;
                        cout << "Enter Password: ";
                        cin >> x;
                        if (x == 2580) {
                            R7.reading5();
                            y++;
                        } else {
                            cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                        }
                        cout << endl << "Do You Want To Add Recommendations(Y/N): ";
                        cin >> q;
                        if (q == 'Y') {
                            cin.ignore();
                            getline(cin, r);
                            H2.writing11(r);
                        } else {
                            l--;
                        }
                    }
                } else if (z == 3) {
                    while (y < 1) {
                        cout << "Record Protected" << endl;
                        cout << "Enter Password: ";
                        cin >> x;
                        if (x == 2580) {
                            R7.reading6();
                            y++;
                        } else {
                            cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                        }
                        cout << endl << "Do You Want To Add Recommendations(Y/N): ";
                        cin >> q;
                        if (q == 'Y') {
                            cin.ignore();
                            getline(cin, r);
                            H2.writing12(r);
                        } else {
                            l--;
                        }
                    }
                } else if (z == 4) {
                    while (y < 1) {
                        cout << "Record Protected" << endl;
                        cout << "Enter Password: ";
                        cin >> x;
                        if (x == 2580) {
                            R7.reading7();
                            y++;
                        } else {
                            cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                        }
                        cout << endl << "Do You Want To Add Recommendations(Y/N): ";
                        cin >> q;
                        if (q == 'Y') {
                            cin.ignore();
                            getline(cin, r);
                            H2.writing13(r);
                        } else {
                            l--;
                        }
                    }
                } else if (z == 5) {
                    while (y < 1) {
                        cout << "Record Protected" << endl;
                        cout << "Enter Password: ";
                        cin >> x;
                        if (x == 2580) {
                            R7.reading8();
                            y++;
                        } else {
                            cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                        }
                        cout << endl << "Do You Want To Add Recommendations(Y/N): ";
                        cin >> q;
                        if (q == 'Y') {
                            cin.ignore();
                            getline(cin, r);
                            H2.writing14(r);
                        } else {
                            l--;
                        }
                    }
                } else if (z == 6) {
                    while (y < 1) {
                        cout << "Record Protected" << endl;
                        cout << "Enter Password: ";
                        cin >> x;
                        if (x == 2580) {
                            R7.reading9();
                            y++;
                        } else {
                            cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                        }
                        cout << endl << "Do You Want To Add Recommendations(Y/N): ";
                        cin >> q;
                        if (q == 'Y') {
                            cin.ignore();
                            getline(cin, r);
                            H2.writing15(r);
                        } else {
                            l--;
                        }
                    }
                } else if (z == 7) {
                    while (y < 1) {
                        cout << "Record Protected" << endl;
                        cout << "Enter Password: ";
                        cin >> x;
                        if (x == 2580) {
                            R7.reading10();
                            y++;
                        } else {
                            cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                        }
                        cout << endl << "Do You Want To Add Recommendations(Y/N): ";
                        cin >> q;
                        if (q == 'Y') {
                            cin.ignore();
                            getline(cin, r);
                            H2.writing16(r);
                        } else {
                            l--;
                        }
                    }
                } else if (z == 8) {
                    while (y < 1) {
                        cout << "Record Protected" << endl;
                        cout << "Enter Password: ";
                        cin >> x;
                        if (x == 2580) {
                            R7.reading11();
                            y++;
                        } else {
                            cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                        }
                        cout << endl << "Do You Want To Add Recommendations(Y/N): ";
                        cin >> q;
                        if (q == 'Y') {
                            cin.ignore();
                            getline(cin, r);
                            H2.writing17(r);
                        } else {
                            l--;
                        }
                    }
                } else if (z == 9) {
                    while (y < 1) {
                        cout << "Record Protected" << endl;
                        cout << "Enter Password: ";
                        cin >> x;
                        if (x == 2580) {
                            R7.reading12();
                            y++;
                        } else {
                            cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                        }
                        cout << endl << "Do You Want To Add Recommendations(Y/N): ";
                        cin >> q;
                        if (q == 'Y') {
                            cin.ignore();
                            getline(cin, r);
                            H2.writing18(r);
                        } else {
                            l--;
                        }
                    }
                } else if (z == 10) {
                    while (y < 1) {
                        cout << "Record Protected" << endl;
                        cout << "Enter Password: ";
                        cin >> x;
                        if (x == 2580) {
                            R7.reading13();
                            y++;
                        } else {
                            cout << "INVALID ATTEMPT--TRY AGAIN" << endl;
                        }
                        cout << endl << "Do You Want To Add Recommendations(Y/N): ";
                        cin >> q;
                        if (q == 'Y') {
                            cin.ignore();
                            getline(cin, r);
                            H2.writing19(r);
                        } else {
                            l--;
                        }
                    }
                }
            } else {
                return 0;
            }
        }
    }
}