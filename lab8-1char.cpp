#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

bool findStr(char* str)
{
	int k = 0,
		pos = 0;
	char* t;
	while (t = strchr(str + pos, 'n'))
	{
		pos = t - str + 1;
		if (str[pos + 1] == 'o')
			k++;
	}
	return k;
}

char* Change(char* s)
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;
	while (p = strchr(s + pos1, 'n'))
	{
		if (s[p - s + 2] == 'o')
		{
			pos2 = p - s + 3;
			strncat(t, s + pos1, pos2 - pos1 - 3);
			strcat(t, "**");
			pos1 = pos2;
		}
	}
	strcat(t, s + pos1);
	strcpy(s, t);
	return t;
}

int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << findStr(str) << " groups of 'n o'" << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	return 0;
}
