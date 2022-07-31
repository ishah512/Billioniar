/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * @file:   main.cpp
 * @author: cwoods
 *
 * Created on March 21, 2019, 9:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "Billionaire.h"
#include "BillionaireDS.h"
using namespace std;

/*
 * 
 */
void readFile(const string FILENAME, BillionaireDS& billionaires);


int main() {
    const string FILENAME = "WealthyTechies.csv";
    BillionaireDS billionaires;
//    BinarySearchTree<Billionaire> bstCopy(bst);
        
    readFile(FILENAME, billionaires);
    billionaires.displayInOrder();
    billionaires.displayNames();
    billionaires.searchByLastName("Ding");
    billionaires.searchByCountry("China");
    
//    Billionaire testBill;
//    testBill.setRank(200);
//    if (bstCopy.contains(testBill))
//        cout << "Test case found" << endl;
//    else cout << "No match for " << testBill.getRanking() << endl;
    
  
    return 0;
}
void readFile(const string FILENAME, BillionaireDS& billionaires) {
	string inString;
	ifstream inFile(FILENAME);
	if (!inFile)
		cout << "Error opening file - " << FILENAME << endl;
	else {
		getline (inFile, inString);
		while (inFile) {
			Billionaire newBill(inString);
//                        cout << "Adding " << newBill.getLastname() << endl;
                        billionaires.add(newBill);
//                        newBill.printBillionaire();
			getline (inFile, inString);
		}
		inFile.close();
                cout << "BST loaded" << endl;
	}
}


