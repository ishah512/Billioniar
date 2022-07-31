/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BillionaireDS.h
 * Author: clwoods1
 *
 * Created on April 2, 2019, 10:54 AM
 */

#ifndef BILLIONAIREDS_H
#define BILLIONAIREDS_H

#include "Billionaire.h"
#include "BinarySearchTree.h"

class BillionaireDS {
public:
    BillionaireDS();
//    BillionaireDS(const BillionaireDS& orig);
//    virtual ~BillionaireDS();
    
    void add(const Billionaire& bill);
    void remove(const Billionaire& bill);
    void displayInOrder();
    void displayNames();
    void searchByLastName(string name);
    void searchByCountry(string country);
    
    static string searchLastName;
    static string searchCountry;
    
private:
    BinarySearchTree<Billionaire> billionsBST;
};

#endif /* BILLIONAIREDS_H */

