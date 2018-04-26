#ifndef _UTILS
#define _UTILS

// START: Define success constant
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
// END: Define success constant

// START: Define utility class
#include <iostream>
using namespace std;

class Utils {
  public:
    static void pause(void);
};

void Utils::pause(void) {
  cout << endl;
  cout << "[INFO] Press any key to continue...";
  cin.get();
}
// END: Define utility class

#endif
