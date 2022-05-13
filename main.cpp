#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------------------
//Files we are testing:
#include "includes/stub/stub.h"



//------------------------------------------------------------------------------------------

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
  return stub();
}