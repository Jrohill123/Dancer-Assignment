#include <iostream>
#include <fstream>
#include "Dancer.h"
using namespace std;





int main() {
	const int sponsers = 12;
	Dancer d[sponsers];
	ifstream fin;
	ofstream fout;
	ofstream foutid;
	fin.open("Dance.info");
	fout.open("Dance class Assinment Data.txt");
	foutid.open("Dance Class sorted list");
	if (!fin.is_open())
	{
		cout << "The input file did not open" << endl;
		return 0;
	}
	if (!fout.is_open())
	{
		cout << "The output file did not open" << endl;
		return 0;
	}
	if (!foutid.is_open())
	{
		cout << "The output file did not open" << endl;
	}

	fout << "Original List:" << endl;

	for (int i = 0; i < 12; i++)
	{
		d[i].read_val(fin);
	}

	for (int i = 0; i < 12; i++)
	{
		d[i].print_val(fout);
	}

	fout << "=======================================" << endl;

	d[1].sort_by_id(d, sponsers);
	d[1].sort_by_rate(d, sponsers);

	fout << "Sorted List:" << endl;

	for (int i = 0; i < 12; i++)
	{
		d[i].print_val(fout);
	}

	fout << "======================================" << endl;

	fout << sponsers << " Sponsers " << d[1].couple_counter(d, sponsers) << " couples " << d[1].total_raised(d) << " total earned";
	fout << endl;
	fout << "======================================" << endl;
	d[1].u_id(d, fout);
	fout << "======================================" << endl;
	d[1].best_couple(d, fout);
	fout << "======================================" << endl;

	return 0;
}