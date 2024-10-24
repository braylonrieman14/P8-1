/*
*
* File: P8.1.cpp
* Author : Braylon Rieman
* Date : 10 / 24 / 2024
*
* Description : Vowel Counter
*
*/

#include <iostream>
using namespace std;

//function prototypes
int countCharacter(string str);

int main(void)
{
	//variables
	int charTotal;
	
	charTotal = countCharacter("test");

	cout << "The total amount of characters is " << charTotal;
}

int countCharacter(string str)
{
	//variables
	int charTotal = 0;
	char currentChar;

	for (int i = 0; i < str.length(); i++)
	{
		currentChar = str[i];
		if (currentChar != ' ')
			charTotal++;
	}

	return(charTotal);
}
