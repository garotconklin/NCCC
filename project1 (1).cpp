#include <iostream>

using namespace std;

int main()
{
	int test1, test2, test3, minimum, maximum;
	double average;

	cout << "Enter the first test score  : ";
	cin >> test1;
	cout << "Enter the second test score : ";
	cin >> test2;
	cout << "Enter the third test score : ";
	cin >> test3;
	
	average = (test1 + test2 + test3) / 3.0;

	if (test1 <= test2  && test1 <= test3)
		minimum = test1;
	else if (test2 <= test1 && test2 <= test3)
		minimum = test2;
	else 
		minimum = test3;
	
	if (test1 >= test2  && test1 >= test3)
		maximum = test1;
	else if (test2 >= test1 && test2 >= test3)
		maximum = test2;
	else 
		maximum = test3;


	cout << endl << "Results ..." << endl;
	cout << "The test scores are " << test1 << " and " << test2  << " and " 
		<< test3 << endl;
	cout << "The average of the test scores is " << average << endl;
	cout << "The minimum test score is " << minimum << endl
		<< "The maximum test score is " << maximum << endl;

	system("pause");
	return 0;
}



	

