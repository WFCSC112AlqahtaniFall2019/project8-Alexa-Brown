/*
 * Alexa Brown
 * CSC 112
 * Project 7
 * Implemented stack, queue, and linked list sort classes to read in a file of data and output it to a textfile.
 */


#include <iostream>
#include <fstream>
#include <string>
#include "Data.h"
#include <stack>
#include <queue>

using namespace std;



int main() {

    ifstream inFile;
    ofstream outFileStack;
    ofstream outFileQueue;
    ofstream outFilePriorityQueue;
    stack <Data> nextStack;
    queue <Data> nextQueue;
    priority_queue <Data> nextPriorityQueue;

    //open the files
    inFile.open ("WorldHappinessReport.csv");
    outFileStack.open ("stacked.txt");
    outFileQueue.open ("queue.txt");
    outFilePriorityQueue.open ("sorted.txt");
    //outFileStack << "Hi "; //checking that things are writing to the outfiles
    //outFileQueue << "Hi";
    //outFileSorted << "Hi";

    //checking that all of the files are opened and can be used
    if (!inFile.is_open()){
        cout << "The input file did not open" << endl;
    }
    if (!outFileStack.is_open()){
        cout << "Stack file did not open" << endl;
    }
    if (!outFileQueue.is_open()){
        cout << "Queue file did not open" << endl;
    }
    if (!outFilePriorityQueue.is_open()){
        cout << "Sorted file did not open" << endl;
    }
    cout << "Files are open." << endl;


    while (!inFile.eof()) {

        //cout << "hi" <<endl;

        //getline will go until the comma then will move on
        string c, r, s, g;
        getline(inFile, c, ',');
        getline(inFile, r, ',');
        getline(inFile, s, ',');
        getline(inFile, g, '\n');

        int rank = stoi(r); //change into integer
        double score = stod(s); //change into a double
        double gdpvalue = stod(g); //change into a double
        Data info = Data(c, rank, score, gdpvalue); //creating the Data object with the information
        nextStack.push(info);
        // cout << "Here";
        nextQueue.push(info);
        nextPriorityQueue.push(info);

    }
    cout << "Hi";
    //printing the information into the txt files
    while (!nextStack.empty()){
        outFileStack<< nextStack.top() <<endl;
        nextStack.pop();
    }
    while (!nextQueue.empty()){
        outFileQueue<< nextQueue.front() <<endl;
        nextQueue.pop();
    }
    while (!nextPriorityQueue.empty()){
        outFilePriorityQueue<< nextPriorityQueue.top() <<endl;
        nextPriorityQueue.pop();
    }
    //<< nextQueue.front();
    /*  nextStack->print(outFileStack);
      nextQueue->print(outFileQueue);
      nextList->print(outFileSorted);*/


    /*

    //cout << "gets to print"<< endl;

    //printing the information into the txt files
    nextStack->print(outFileStack);
    nextQueue->print(outFileQueue);
    nextList->print(outFileSorted);

    //delete all of the data Nodes to avoid memory leakage
    while(nextStack->pop_head(other));
    while(nextQueue->dequeue_head());
     */

    //cout << "gets to close"<< endl;

    //closing the files after using them to avoid memory leakage
    inFile.close();
    outFileStack.close();
    outFileQueue.close();
    outFilePriorityQueue.close();
    cout << "Files are closed." << endl;

    return 0;

}