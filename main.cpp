#include <iostream>
#include <iomanip>

using namespace std;

bool basic_test(bool debug=false);

int main(int argv, char** argc)
{
  cout << "\n" << endl;

  cout << "\n\n=====================" << endl;

  if (basic_test()) {
    cout << "PASSED" << endl;
  } else {
    cout << "FAILED" << endl;
  }
  
  return 0;
}

bool basic_test(bool debug)
{
  return true;
}