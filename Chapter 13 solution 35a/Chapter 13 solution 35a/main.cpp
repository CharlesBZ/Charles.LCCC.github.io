//including essential header files

#include <iostream>

using namespace std;

template <class T>
T surprise(T x, T y)
{
	return x + y;
}


int main()

{

	//calling the given template function

	cout << surprise(5, 7) << endl;

}