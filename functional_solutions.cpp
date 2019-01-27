#include <iostream>
//#include <math.h>
//#include <cmath>
using namespace std;

void scores(int &test1, int &test2, int &test3);
float ave(float &average, int test1, int test2, int test3);
void min(int test1, int test2, int test3, int &minimum);
void max(int test1, int test2, int test3, int &maximum);
void display(int test1, int test2, int test3, float average, int minimum, int maximum);

int
main()
{
  int test1, test2, test3, minimum, maximum;
  float average;
  
  scores(test1, test2, test3);
  ave(average, test1, test2, test3);
  min(test1, test2, test3, minimum);
  max(test1, test2, test3, maximum);
  display(test1, test2, test3, average, minimum, maximum);
  
  system ("pause");
  return 0;
}

void
scores(int &test1, int &test2, int &test3)
{
  cout << "Enter the first test score  : ";
  cin >> test1;
  cout << "Enter the second test score : ";
  cin >> test2;
  cout << "Enter the third test score : ";
  cin >> test3;
}

float
ave(float &average, int test1, int test2, int test3)
{
  average = (test1 + test2 + test3) / 3.0;
  return average;
}

void
min(int test1, int test2, int test3, int &minimum)
{
  if (test1 <= test2 && test1 <= test3)
    minimum = test1;
  else if (test2 <= test1 && test2 <= test3)
    minimum = test2;
  else
    minimum = test3;

  // return minimum;
}

void
max(int test1, int test2, int test3, int &maximum)
{
  if (test1 >= test2 && test1 >= test3)
    maximum = test1;
  else if (test2 >= test1 && test2 >= test3)
    maximum = test2;
  else
    maximum = test3;

  // return maximum;
}

void
display(int test1, int test2, int test3, float average, int minimum, int maximum)
{
  cout << endl << "Results ..." << endl;
  cout << "The test scores are " << test1 << " and " << test2 << " and "
    << test3 << endl;
  cout << "The average of the test scores is " << average << endl;
  cout << "The minimum test score is " << minimum << endl
    << "The maximum test score is " << maximum << endl;
}
