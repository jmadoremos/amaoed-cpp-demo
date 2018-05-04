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
#include "../utils.h"

using namespace std;

int main()
{
	int a = 100;
	int* b = &a;
	cout << "The value of a is " << a << endl;
	cout << "The address of a is " << &a << endl;
	cout << "The value of b is " << b << endl;
	cout << "The value pointed at by b is " << *b << endl;
	cout << "The address of b is " << &b << endl;
	cout << endl;

	a = 200;
	cout << "The value of a is " << a << endl;
	cout << "The address of a is " << &a << endl;
	cout << "The value of b is " << b << endl;
	cout << "The value pointed at by b is " << *b << endl;
	cout << "The address of b is " << &b << endl;

	// ********************** DO NOT CHANGE **********************
	// Print a new line and ask user for any ket before exiting
	// ***********************************************************
	Utils::pause();
	return 0;
}
