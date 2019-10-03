#include <iostream>;
#include <string>;

using namespace std;

int main()
{
	cout << int(char("A")) << endl; // Returns 48
	cout << int(char('A')) << endl;			// Returns 65
	cout << int(char('\0'));
	return 0;
}