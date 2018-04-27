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
	char monthName[10];
	short month, day, year;

  month = 1;
	cout << "The value of month is: " << month << endl;

  day = 12;
	cout << "The value of day is: " << day << endl;

	year = 2018;
  cout << "The value of year is: " << year << endl;
	cout << endl;

	switch (month)
  {
		case 1:
      strcpy(monthName, "January");
      break;
		case 2:
      strcpy(monthName, "February");
      break;
		case 3:
      strcpy(monthName, "March");
      break;
		case 4:
      strcpy(monthName, "April");
      break;
		case 5:
      strcpy(monthName, "May");
      break;
		case 6:
      strcpy(monthName, "June");
      break;
		case 7:
      strcpy(monthName, "July");
      break;
		case 8:
      strcpy(monthName, "August");
      break;
		case 9:
      strcpy(monthName, "September");
      break;
		case 10:
      strcpy(monthName, "October");
      break;
		case 11:
      strcpy(monthName, "November");
      break;
		case 12:
      strcpy(monthName, "December");
      break;
		default:
      cout << "Invalid Month!" << endl;
	}

  if (strcmp(monthName, "") != 0)
  {
	  cout << "The date is ";
    cout << monthName << " " << day << ", " << year << endl;
  }

	// ********************** DO NOT CHANGE **********************
	// Print a new line and ask user for any ket before exiting
	// ***********************************************************
	Utils::pause();
	return EXIT_SUCCESS;
}
