//UNIT 4 Assignment
//using dev c++
//reminds me of a in class activity
#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<numeric>
#include"Input_Validation_Extended.h"	//inputvalidated 
// input validate file is modified and/or missing all the couts
using namespace std;


void gradesVector(vector<double> vect, int sizeOfVector);

//begin int main
int main()
{
	cout << " ------------------- Welcome to the Grading Program---------------------------"<< endl ;
	cout << fixed << setprecision(4);
	int size = 0;

	vector<double> gradesVector_vector = {};
	gradesVector(gradesVector_vector, size);
	
	
	return 0;
}
//end int main
//begin void

void gradesVector(vector<double> vect, int sizeOfVector)
{
	int sizeOfvector = 0;
	double input = 0.0, average = 0.0;
	cout << "How many Grades would you like to add?: ";
	sizeOfVector = validateInt(sizeOfVector);
	cout << "Number of Grades = " << sizeOfVector << endl;
	for(int i = 0; i < sizeOfVector;  i++)
	{
		cout << "Please enter a grade:" ;
		input = validateDouble(input);
		vect.push_back(input);	
	}
		average = accumulate(vect.begin(),vect.end(),0.00)/sizeOfVector;
		cout << "\nAverage of Grades = "  << average << endl;
	sort(vect.begin(),vect.end());

	reverse(vect.begin(),vect.end());
	cout << "Values sorted :" << endl;
//end void vector
// sorting
for(double val : vect)
	{
	cout <<  val << endl;
	}
}
