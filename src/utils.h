// ********************************* LICENSE ********************************* //
//   Copyright 2018 James Michael Adoremos
//
//   Licensed under the Apache License, Version 2.0 (the "License")
//   you may not use this file except in compliance with the License
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
// *************************************************************************** //

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

class Utils
{
  public:
    static void pause(void);
};

void Utils::pause(void)
{
  fflush(stdin);
  cout << endl;
  cout << "[INFO] The application will now be terminating...";
  cin.get();
  cout << endl;
}
// END: Define utility class

#endif
