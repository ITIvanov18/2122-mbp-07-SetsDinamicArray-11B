#pragma once

#include <iostream>
#include <vector>

using namespace std;


int DEFAULTSIZE = 10;
int* elements = new int[size];
public: // Default constructor

	Set() {};

	Set(int s);

	Set(vector<int> items);
	 

	// Destructor

	~Set();

	int getSize()
	{
		return this->size;
	}

	bool contains(int n);

	Set unionWith(Set& Y);

	Set intersectWith(Set& Y);

	Set complementWith(Set& Y);

	static Set symmetricComplement(Set& X, Set& Y);

	static vector<Set> cartesianProduct(Set& X, Set& Y);

	static void displayCartesianProduct(vector<Set>& X);


	void sort();

	int calcDegree();

	void enterFromKeyboard();

	void display();
};