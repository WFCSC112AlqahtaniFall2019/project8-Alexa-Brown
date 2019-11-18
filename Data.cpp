/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */
#include "Data.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Data::Data() { //default constructor
    country = "";
    happinessRank = 0;
    happinessScore = 0;
    GDP = 0;
}
Data::Data(string c, int rank, double score, double g) { //alternate constructor
    country = c;
    happinessRank = rank;
    happinessScore = score;
    GDP = g;
}
/*

bool Data:: operator > (const Data &d) { // > overloader
    return happinessRank > d.happinessRank;
    /*if (this->happinessRank < d.happinessRank){
        return false;
    }
    else return this->happinessRank > d.happinessRank;

}

/*
bool Data:: operator < (Data &d){ // < overloader
    if (this->happinessRank > d.happinessRank){
        return false;
    }
    else if (this->happinessRank < d.happinessRank){
        return true;
    }
    else {
        return false;
    }

}*/

ostream& operator << (ostream& os, const Data a){ //overloaded to print to the files
    os << "Country: " << a.country << "  Rank: " << a.happinessRank << "  Score: " << a.happinessScore << "  GDP: " << a.GDP << endl;
    cout << "Printing" << endl; // to check that it is printing when called
}
