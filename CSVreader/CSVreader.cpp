// CSVreader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "CSV_reader.h"

using namespace std;


int main()
{
    CSV_reader csv;
   
    string filename = "D:/programming/c++/Test/CSVreader/test.csv";
    csv.FileOpen(filename);
    csv.ReadCSV(';');
    csv.displayPersons();
    csv.FileClose();
}

