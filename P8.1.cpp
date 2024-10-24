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
int countVowel(string str);

int main(void)
{
	//variables
	int vowelTotal;
	
	vowelTotal = countVowel("test");

	cout << "The total amount of characters is " << vowelTotal;
}

int countVowel(string str)
{
	//variables
	int vowelTotal = 0;
	char currentChar;

	for (int i = 0; i < str.length(); i++)
	{
		currentChar = str[i];
		if (currentChar == 'A' || currentChar == 'a' || currentChar == 'E' || currentChar == 'e' || currentChar == 'I' || currentChar == 'i' || currentChar == 'O' || currentChar == 'o' || currentChar == 'U' || currentChar == 'u')
			vowelTotal++;
	}

	return(vowelTotal);
}
