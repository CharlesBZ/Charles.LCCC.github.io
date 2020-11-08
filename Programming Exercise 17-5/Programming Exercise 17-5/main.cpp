#include <iostream>
#include <string>
#include <cctype>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	string line;
	getline(cin, line);
	for (int i = 0; i < line.length();
		i++)
	{
		line[i] = tolower(line[i]);
	}
	cout << line << endl;
	stack<string> myStack;
	queue<string> myQueue;
	myStack.push(line);
	myQueue.push(line);

	bool isPalindrome = true;
	for (int i = 0; i < line.length(); i++)
	{
		isPalindrome *= line[i] == line[line.length() - 1 - i];
	}
	if (isPalindrome) 
	{
		cout << "The line is palindrome!";
	}
	else
	{
		cout << "The line isn't palindrome!";
	}
	return 0;
}