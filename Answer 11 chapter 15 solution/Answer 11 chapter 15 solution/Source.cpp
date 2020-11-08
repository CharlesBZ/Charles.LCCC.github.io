//Header File

#include <iostream>

//Using namespace

using namespace std;

//Declaring the recEx11() function

void recEx11(int x);

//Defining the main

int main() {

	//Calling recEx11 function with the value of 28

	recEx11(28);

}

void recEx11(int x)

{

	//x greater 0

	if (x > 0)

		//checking x mod 2 == 0

		if (x % 2 == 0)

		{

			//if the condition true then execute x-3/2

			recEx11((x - 3) / 2);

			//Printing x

			cout << x << " ";

		}

	//else

		else

		{

			//call recEx11 with x-4/2

			recEx11((x - 4) / 2);

			//Printing x

			cout << x << " ";

		}

}