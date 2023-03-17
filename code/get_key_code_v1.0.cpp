#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	cout << "Get_Key_Code_v.1\n By.Lonewolf239\n================\nExit: ESC\nClear: Backspace\n================" << endl;
	bool start = true;
	string ch1;
	int ch;
	while (start) {
		ch1 = ch = _getch();
		if (ch == 27)
			exit(0);
		if (ch == 8) {
			system("cls");
			continue;
		}
		if (ch == 32)
			ch1 = "Space";
		if (ch == 13)
			ch1 = "Enter";
		if (ch == 10)
			ch1 = "Enter + CTRL";
		if (ch == 9)
			ch1 = "TAB";
		cout << ch1 << ": " << ch << endl << "================" << endl;
	}
	return 0;
}