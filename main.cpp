#include <iostream>;
#include <string>;

using namespace std;

int main()
{
	string a = "A", b = "B";
	cout << (a > b ? a : b);
	cout << "\nA:" << stoi(a) << " B:" << stoi(b);
	return 0;
}