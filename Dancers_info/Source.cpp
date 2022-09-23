#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream fout;
	double array[12][3] = { {117,5,0.80}, {141,2,2.00}, {161,6,3.40}, {117,3,2.25}, {117,5,1.00}, 
						{141,5,0.65}, {132,3,1.50}, {141,2,4.00}, {141,1,10.00}, {161,4,4.50},
						{132,3,3.75}, {157,4,4.75}                                          };
	// I intialized an array of 12 rows and 3 collums with the information for the Dancers which is good.

	fout.open("Dance.info");
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fout << array[i][j];
			fout << " ";
		}
		fout << endl;
	}
	// step through the array with a multi for loop.

	fout.close();

	cout << "Finished stepping through the array and saving your info";

	return 0;
}