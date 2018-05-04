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

#include <cstdlib>
#include <iostream>
#include "../utils.h"

using namespace std;

int calc(int a, int b)
{
	return a + b;
}

int main()
{
	cout << "The value of 5 and 6 after calc(): " << calc(5, 6) << endl;

	// ********************** DO NOT CHANGE **********************
	// Print a new line and ask user for any ket before exiting
	// ***********************************************************
	Utils::pause();
	return EXIT_SUCCESS;
}
