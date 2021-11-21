//Name: Kim Carlo Larino
//Activity Name: PT3

//Retrieval of Data

#include<iostream>
#include<string>
#include<windows.h>
#include<fstream>
#include<cstdlib>

using namespace std;

//Start of Program

int main(){

//Declaration

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

//Inputs

    ifstream in_stream;
    ofstream ou_stream;
    string name,cname;
    long long int id;
    double hours,minutes,rate,aminutes,ctime,gpay,tax,npay,taxrate;
    const double converter = 60,vat1 = 0.05,vat2 = 0.1,vat3 = 0.12;

    ou_stream.open("PT3_Data.txt", ios::app);

//Page 1 - Start of Program

    system("Color 01");

    system("CLS");

    cout <<endl;

    cout << "Loading..." << endl;
    
    cout <<endl;

    system("pause");

    system("CLS");

//Page 2 - Enter Name

    start:

    cout <<endl;
    cout << "Hello and welcome..." << endl;

    cout << "How do you want me to call you?: ";
    cin >> name;
    cin.ignore();

    system("CLS");

//Page 3 - Input of Information

    cout <<endl;
    cout << "======================================" << endl;
    cout << "Hello " <<name <<"!" << endl;
    cout << "Enter Your Full Name : ";
    getline(cin,cname);
    cout << "Enter Your ID Number : ";
    cin >> id;
    cout << "Enter Rate Per Hour  : P";
    cin >> rate;
    cout << "Enter Clocked In Hours For This Passed Month : ";
    cin >> hours;
    cout << "Enter Extra Minutes For This Passed Month    : ";
    cin >> minutes;

//Page 4 - Loading Screen

    cout <<endl;

    cout << "Proccessing..." << endl;
    system("pause");
    system("CLS");

//Computation

    aminutes = minutes / converter;
    ctime = hours + aminutes;

    gpay = rate * ctime;

    if(gpay <= 20000){
        taxrate = 5;
        tax = gpay * vat1;
        npay = gpay - tax;
    }
    else if (gpay <= 40000){
        taxrate = 10;
        tax = gpay * vat2;
        npay = gpay - tax;
    }
    else if (gpay >= 40001){
        taxrate = 12;
        tax = gpay * vat3;
        npay = gpay - tax;
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(0);    

//Page 5 - Results Page

    cout << "======================================" << endl;
    cout << "Hello " <<name <<", here is your salary" << endl;
    cout <<endl;
    system("pause");
    system("CLS");

//Results

    cout <<endl;
    cout <<endl;
    cout << "--------------------------------------" << endl;
    cout << "----------------SALARY----------------" << endl;
    cout << "--------------------------------------" << endl;
    cout <<endl;
    cout <<endl;
    cout <<endl;

    cout <<"Name of Employee : " <<cname << endl;
    cout <<"ID Number        : " <<id << endl;
    cout <<endl;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout <<"Gross Salary : P" <<gpay << endl;
    cout <<"TAX Rate     : " <<taxrate <<"%" << endl;
    cout <<"TAX Amount   : P" <<tax <<endl;
    cout <<"Net Pay      : P" <<npay << endl;

//File Saving

    ou_stream <<endl;
    ou_stream <<endl;
    ou_stream << "--------------------------------------" << endl;
    ou_stream << "----------------SALARY----------------" << endl;
    ou_stream << "--------------------------------------" << endl;
    ou_stream <<endl;
    ou_stream <<endl;
    ou_stream <<endl;

    ou_stream <<"Name of Employee : " <<cname << endl;
    ou_stream <<"ID Number        : " <<id << endl;
    ou_stream <<endl;

    ou_stream.setf(ios::fixed);
    ou_stream.setf(ios::showpoint);
    ou_stream.precision(2);
    
    ou_stream <<"Gross Salary : P" <<gpay << endl;
    ou_stream <<"TAX Rate     : " <<taxrate <<"%" << endl;
    ou_stream <<"TAX Amount   : P" <<tax <<endl;
    ou_stream <<"Net Pay      : P" <<npay << endl;


    return 0;

}