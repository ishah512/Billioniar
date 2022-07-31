/**
*	@file Billionaire.cpp
*	@author Cindy Woods
*/
#include "Billionaire.h"
#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

Billionaire::Billionaire()  {
}
Billionaire::Billionaire(string info) {
	string str;
	istringstream iss(info);
	
	getline(iss, str, ',');
	ranking = stoi(str);
	
	getline(iss, firstname, ',');
	getline(iss, lastname, ',');
	
	getline (iss, str, ',');
	worth = stod(str);
	
	getline(iss, source, ',');
	getline(iss, citizenship);
}
string Billionaire::getFirstname(void) const {
	return firstname;
}
string Billionaire::getLastname(void) const {
	return lastname;
}
double Billionaire::getWorth(void) const {
	return worth;
}
string Billionaire::getSource(void) const {
	return source;
}
string Billionaire::getCitizenship(void) const {
	return citizenship;
}
int Billionaire::getRanking(void) const {
	return ranking;
}

void Billionaire::setRank(int newRank) {
	ranking = newRank;
}
void Billionaire::setWorth(double newWorth) {
	worth = newWorth;
}
void Billionaire::printBillionaire(void) const {
	string name = firstname + " " + lastname;
	cout << fixed << setprecision(1);
	cout << setw(2) << right << ranking << "\t" << setw(30) << left << name
	<< "\t$" << setw(4) << right << worth << "B\t" 
	<< setw(30) << left << source << "\t" << citizenship << "\n";
}

//overloaded operators
bool Billionaire::operator <(const Billionaire& rhs) const {
    return (this->ranking < rhs.ranking);
}
bool Billionaire::operator >(const Billionaire& rhs) const {
    return (this->ranking > rhs.ranking);
}
bool Billionaire::operator ==(const Billionaire& rhs) const {
    return (this->ranking == rhs.ranking
            && rhs.citizenship == this->citizenship
            && rhs.firstname == this->firstname
            && rhs.lastname == this->lastname
            && rhs.source == this->source
            && rhs.worth == this->worth);
}
ostream& operator<< (ostream& out, const Billionaire& rhs) {
    out << fixed << setprecision(1);
    out << setw(2) << right << rhs.ranking << "\t"
            << setw(30) << left << rhs.firstname + " " + rhs.lastname
            << "\t&" << setw(4) << right << rhs.worth << "B\t"
            << setw(30) << left << rhs.source << "\t" 
            << rhs.citizenship;
    return out;
}
