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

#include <iostream>
#include <cstdlib>
#include "../utils.h"

using namespace std;

int main()
{
  int mInt = 135902;
  cout << "Integer: " << mInt << endl;

  short mShort = 6540;
  cout << "Short: " << mShort << endl;

  long mLong = 13112452;
  cout << "Long: " << mLong << endl;

  bool mBool = true;
  cout << "Bool: " << mBool << endl;

  float mFloat = 0.1f;
  cout << "Float: " << mFloat << endl;

  double mDouble = 0.001;
  cout << "Double: " << mDouble << endl;

  char mChar = '$';
  cout << "Character: " << mChar << endl;

  char mString[] = "This is a string";
  cout << "String as an array of characters: " << mString << endl;

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any ket before exiting
  // ***********************************************************
  Utils::pause();
  return EXIT_SUCCESS;
}
