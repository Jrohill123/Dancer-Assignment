#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Dancer
{
	int id;
	int hours;
	float rate;

public:
	Dancer();
	void read_val(ifstream &);
	void print_val(ofstream&);
	void sort_by_id(Dancer d[], int);
	void sort_by_rate(Dancer d[], int);
	int couple_counter(Dancer d[], int);

	// Total amount earned by Each couple and the number of sponsers
	void u_id(Dancer d[], ofstream&);

	// money earned from each peformance
	float get_earnings(Dancer d[], int);
	int get_id();
	int get_hrs();
	float get_rate();

	// Total money earned by all dancers
	float total_raised(Dancer d[]);
	void swap(int, int, Dancer d[]);

	void best_couple(Dancer d[], ofstream&);
};

