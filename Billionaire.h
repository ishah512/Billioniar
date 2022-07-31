#ifndef BILLIONAIRE_H
/** @file Billionaire.h
*   @author Cindy Woods
*   #class Billionaire
*   This class maintains information about billionaires
*/
#include <string>
using namespace std;


class Billionaire {
private:
	/**
	*	person's first name
	*/
	string firstname;
	/**
	*	person's last name
	*/
	string lastname;
	/**
	*	person's net worth in billions
	*/
	double worth;
	/**
	*	source of wealth
	*/
	string source;
	/**
	*	person's country of citizenship
	*/
	string citizenship;
	/**
	*	person's current ranking in the list
	*/
	int ranking;
	
public:
	/** 
	* Default constructor
	*/
	Billionaire();
	
	/** Contructor
	*	@param info - comma separated list containing values for attributes
	*/
	Billionaire(string info);
	
	/**
	* Access the person's first name
	* @return the person's first name
	*/
	string getFirstname(void) const;
	/**
	* Access the person's last name
	* @return the person's last name
	*/
	string getLastname(void) const;
	/**
	* Access the person's net worth
	* @return the person's net worth
	*/
	double getWorth(void) const;
	/**
	* Access the person's source of wealth
	* @return the person's source of wealth
	*/
	string getSource(void) const;
	/**
	* Access the person's country of citizenship
	* @return the person's country of citizenship
	*/
	string getCitizenship(void) const;
	/**
	* Access the person's ranking in the list
	* @return the person's ranking in the list
	*/
	int getRanking(void) const;	
	
	/**
	* Change the persons ranking in the list
	* @param newRank - the person's new rank in the list
	*/
	void setRank(int newRank);
	/**
	* Change the person's net worth
	* @param newWorth - the person's new net worth
	*/
	void setWorth(double newWorth);
	
	/**
        * Display all the data about the person
        * TODO replace with operator<< 
	*/
	void printBillionaire(void) const;
        
        //overloaded operators
        bool operator< (const Billionaire& rhs) const;
        bool operator> (const Billionaire& rhs) const;
        bool operator== (const Billionaire& rhs) const;
        
        friend ostream& operator<< (ostream& out, const Billionaire& rhs);

};

#define BILLIONAIRE_H
#endif