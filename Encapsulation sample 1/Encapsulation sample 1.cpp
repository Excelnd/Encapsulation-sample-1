// ENCAPSULATION PRINCIPLES AND CODE SAMPLES 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct item
{
	int keep_data;
};

void main()
{
	item John_cat, Joe_cat, Big_cat;
	int garfield;

	John_cat.keep_data = 10;
	Joe_cat.keep_data = 11;
	Big_cat.keep_data = 12;
	garfield = 13;

	// displaying data
	cout << "Data value for John_cat is " << John_cat.keep_data << "\n";
	cout << "Data value for Joe_cat is " << Joe_cat.keep_data << "\n";
	cout << "Data value for Big_cat is " << Big_cat.keep_data << "\n";
	cout << "Data value for garfield is " << garfield << "\n\n";


}

