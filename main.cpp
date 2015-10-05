//Written by Jordan Karpan

#include <cstdio>
#include <cctype>
#include <iostream>

using namespace std;

int isInDict(char[] word);
int insertIntoDictionary(int position, char[] word);

const int WORDLENGTH = 20;
const int MAXWORDS = 255;
char dict [MAXWORDS][WORDLENGTH];
int numOfWords [MAXWORDS];

int main() 
{
	for (int a = 0; a < MAXWORDS; a++) //Cycle through word counter array and ensure they all are set to 0 instead of garbage data
		numOfWords[a] == 0;

	char ch;
	char curWord [WORDLENGTH];
	int i = 0;
	int wordCount = 0;

	while( cin.good() )//Perform while words are being read from the file.
	{
		ch = cin.get();
		if ( isalpha(ch) )
		{
			if (i < WORDLENGTH)
			{
				curWord[i] = ch;
				i++;
			}
			else
			{
				cout << "Error: Word processed is too long and exceeds maximum word length! Word will not be processed!";
			}
		}
		else
		{
			curWord[i] = '\0';
			i = 0;
			if (curWord[0] != '\0') //If the word does not contain just a null byte at the beginning, check the dictionary for the word.
			{
				isInDict(curWord);
			}
		}
		return 0;
	}
}

int isInDict(char[] word) //Checks if a given word is in the master dictionary (char dict [MAXWORDS][WORDLENGTH]) and returns true or false based upon the result.
{
	for (int i = 0; i <= MAXWORDS; i++)
	{
		if (dict[i] == word) return i;
		else return -1;
	}
}

int insertIntoDictionary(int position, char[] word)
{
	
	dict[position]
}
