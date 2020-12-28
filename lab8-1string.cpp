#include <iostream>
#include <string>

using namespace std;

int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find('n', pos)) != -1)
	{
		pos++;
		if (s[pos + 1] == 'o')
			k++;
	}
	return k;
}

string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('n', pos)) != -1)
		if (s[pos + 2] == 'o')
			s.replace(pos, 3, "**");
	return s;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << Count(str) << " groups of 'n o'" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
