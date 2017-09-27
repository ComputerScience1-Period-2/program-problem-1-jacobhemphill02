/* Jacob Hemphill - 9/21/17 Period 2
Assignment Name: DisplayText
Trying to display text in the console and create new project
*/

// Libraries
#include <iostream>
#include <conio.h>

// namespace
using namespace std;

// Void Pause
void pause() {
	cout << "press any key to continue . . .";
	while (!_kbhit());
	cout << '\n';
}

// Void Main
void main() {
	char period_2 = '2';
	cout << "Jacob Hemphill" << endl;
	cout << "Period " << period_2 << endl;
	cout << "Hello World" << endl;
	
	pause();
		return;
}