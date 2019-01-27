// Kameron Kraemer January 2019
// This program will ask you to enter three test scores, and then find the average of the scores
// as well as the minimum and maximum scores respectively.


#include <iostream>
using namespace std;

// function prototypes

void getscores(int &test1, int &test2, int &test3);

double calculateave(double average, int test1, int test2, int test3); 

void display(int test1, int test2, int test3, double average, int minimum, int maximum);

void calculateminmax(int test1, int test2, int test3, int maximum, int minimum);

int main()
{
	
	int test1 = 0, test2 = 0, test3 = 0, minimum = 0, maximum = 0;
	double average=0;

	getscores(test1, test2, test3); // function call

	calculateave(average, test1, test2, test3); // function call

	display(test1, test2, test3, average, minimum, maximum); // function call

	
	system("pause");
	return 0;
}



void getscores(int &test1, int &test2, int &test3)
{
	
	cout << "Enter the first test score  : ";
	cin >> test1;
	cout << "Enter the second test score : ";
	cin >> test2;
	cout << "Enter the third test score : ";
	cin >> test3;
}


double calculateave(double average, int test1, int test2, int test3)
{
	average = (test1 + test2 + test3) / 3.0;
	return average;
}

void display(int test1, int test2, int test3, double average, int minimum, int maximum)
{
	cout << endl << "Results ..." << endl;
	cout << "The test scores are " << test1 << " and " << test2 << " and "
		<< test3 << endl;
	cout << "The average of the test scores is " << average << endl;
	cout << "The minimum test score is " << minimum << endl
		<< "The maximum test score is " << maximum << endl;
}


void calculateminmax(int test1, int test2, int test3, int maximum, int minimum)
{
	if (test1 <= test2 && test1 <= test3)
		minimum = test1;
	else if (test2 <= test1 && test2 <= test3)
		minimum = test2;
	else
		minimum = test3;

	if (test1 >= test2 && test1 >= test3)
		maximum = test1;
	else if (test2 >= test1 && test2 >= test3)
		maximum = test2;
	else
		maximum = test3;
}