#include <iostream>
using namespace std;
int main ()
{
  int grade;
  cout << "Enter student's grade: ";
  cin >> grade;

  if (grade > 75)
  cout << "passed";

  if (grade < 75)
  cout << "failed";

  return 0;

  //Enter student's grade: 80
  //passed
}
