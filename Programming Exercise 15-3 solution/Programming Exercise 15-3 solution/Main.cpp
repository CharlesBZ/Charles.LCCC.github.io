#include <iostream>
#include <string>

using namespace std;

int vowels(string, int);
bool isVowel(char);

int main()
{
	string array;
	cout << "Enter your word: ";
	getline(cin, array);
	cout << "There are " << vowels(array, 0) << " vowels in \"" << array << "\"\n";
	return 0;
}

int vowels(string str, int subscript)
{
	if (str[subscript] == '\0')
	{

		return 0;
	}
	else
		if (isVowel(str[subscript]))
		{

			return 1 + vowels(str, subscript + 1);
		}
		else
		{

			return vowels(str, subscript + 1);
		}
}

bool isVowel(char in)
{
	switch (in)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':      
		return true;
	}
	return false;
}