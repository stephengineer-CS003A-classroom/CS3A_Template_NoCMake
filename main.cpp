#include <iostream>
#include <iomanip>

using namespace std;

bool simpleTest(bool debuug=false)
{
  return true;
}

int main(int argv, char** argc)
{
  cout << "\n" << endl;

  cout << "\n\n=====================" << endl;

  if (simpleTest()) {
    cout << "PASSED" << endl;
  } else {
    cout << "FAILED" << endl;
  }
  
  return 0;
}
