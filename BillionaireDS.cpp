/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BillionaireDS.cpp
 * Author: clwoods1
 * 
 * Created on April 2, 2019, 10:54 AM
 */

#include "BillionaireDS.h"
#include "BinarySearchTree.h"

string BillionaireDS::searchLastName = "";
string BillionaireDS::searchCountry = "";

//global functions
void display(Billionaire& item) {
    item.printBillionaire();
}
void justNames(Billionaire& item) {
    std::cout << item.getLastname() << ", " << item.getFirstname() << endl;
}
void nameSearch(Billionaire& item) {
    if (item.getLastname() == BillionaireDS::searchLastName)
        cout << item << endl;
}
void countrySearch(Billionaire& item) {
    if (item.getCitizenship() == BillionaireDS::searchCountry)
        cout << item << endl;
}
BillionaireDS::BillionaireDS() {
    BinarySearchTree<Billionaire> billionsBST;
}

//BillionaireDS::BillionaireDS(const BillionaireDS& orig) {
//}
//
//BillionaireDS::~BillionaireDS() {
//}

void BillionaireDS::add(const Billionaire& bill) {
    billionsBST.add(bill);
}
void BillionaireDS::remove(const Billionaire& bill) {
    billionsBST.remove(bill);
}
void BillionaireDS::displayInOrder() {
    billionsBST.inorderTraverse(display);
}
void BillionaireDS::displayNames() {
    billionsBST.inorderTraverse(justNames);
}
void BillionaireDS::searchByLastName(string name) {
    searchLastName = name;
    billionsBST.inorderTraverse(nameSearch);
}
void BillionaireDS::searchByCountry(string country) {
    searchCountry = country;
    billionsBST.inorderTraverse(countrySearch);
}
