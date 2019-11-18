/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */
#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Data {
    friend ostream& operator << (ostream& os, Data a);
public:
    string country;
    int happinessRank;
    double happinessScore;
    double GDP;


    Data();
    Data(string c, int rank, double score, double g);

     friend bool operator > (const Data &d, const Data & d2);

     friend bool operator < (const Data &d, const Data & d2);

    void setCountry (string c){
        country = c;
    }
    string getCountry(){
        return country;
    }
    void sethappinessRank (double r){
        happinessRank = r;
    }
    double gethappinessRank(){
        return happinessRank;
    }
    void sethappinessScore (double s){
        happinessScore = s;
    }
    double gethappinessScore(){
        return happinessScore;
    }
    void setGDP(double g){
        GDP = g;
    }
    double getGDP(){
        return GDP;
    }


};


#endif //PROJECT7_DATA_H
