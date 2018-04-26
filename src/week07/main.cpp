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
#include <cstring>
#include <iostream>
#include "../utils.h"

using namespace std;

int main()
{
	int n;

	cout << "Enter the number of rows: ";
	cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++)
  {
		for (int t = 0; t < n - i - 1; t++)
    {
			cout << " ";
		}
		for (int t = 0; t < (i * 2) + 1; t++)
    {
			cout << "*";
		}
		cout << endl;
	}

	// ********************** DO NOT CHANGE **********************
	// Print a new line and ask user for any ket before exiting
	// ***********************************************************
	Utils::pause();
	return EXIT_SUCCESS;
}
