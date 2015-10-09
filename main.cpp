//Written by Jordan Karpan - 5041823

#include <cstdio>
#include <cctype>
#include <iostream>
#include <string.h>

using namespace std;

//Function Declarations
int isInDict(char word []);
void insertIntoDictionary(int position, char word []);
void printDictionary();

//Global Variables
const int WORDLENGTH = 20;
const int MAXWORDS = 255;
char dict [MAXWORDS][WORDLENGTH];
int numOfWords [MAXWORDS];
int wordCount = 0;

int main() 
{
	for (int a = 0; a < MAXWORDS; a++) //Cycle through word counter array and ensure they all are set to 0 instead of garbage data
		numOfWords[a] == 0;

	char ch;
	char curWord [WORDLENGTH];
	int i = 0;
	bool tooLong = false;
	
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
				if (tooLong == false)
				{
					cout << "Error: Word processed is too long and exceeds maximum word length! Word will be truncated!\n";
					tooLong = true;
				}
			}
		}
		else
		{
			curWord[i] = '\0';
			i = 0;
			if (curWord[0] != '\0') //If the word does not contain just a null byte at the beginning, check the dictionary for the word.
			{
				int tmp = isInDict(curWord);
				insertIntoDictionary(tmp, curWord);
				tooLong = false;
			}
		}
	}
	printDictionary();//print the dictionary now that we've cycled through the text file.
	return 0;
}

int isInDict(char word[]) //Checks if a given word is in the master dictionary (char dict [MAXWORDS][WORDLENGTH]) and returns the location of the word if found.
{
	for (int i = 0; i <= MAXWORDS; i++)
	{
		if (strcmp(word, dict[i]) == 0)
		{
			return i;
		}
	}
	return -1;
}

void insertIntoDictionary(int position, char word[])//inserts the word into the dictionary, or if it exists, just update the counter for that word.
{
	if (position != -1)
	{
		numOfWords[position]++; //If the word exists, just increment the count at the location.
	}
	else
	{
		//Otherwise, insert the word.
		if (wordCount >= MAXWORDS)
		{
			cout << "Cannot insert word into dictionary - Dictionary is full!\n";//check if the dictionary is full to prevent errors.
			return;
		}
		else
		{
			position = wordCount;
			for (int a = 0; a < WORDLENGTH; a++)
			{
				dict[position][a] = word[a];
			}
			numOfWords[position]++;//increment the counter to 1 to begin counting that word.
			wordCount++;
		}
	}
	
}

void printDictionary()//prints the dictionary with the count of the word.
{
	for (int i = 0; i < wordCount; i++)
	{
		printf("%s - occurs %d times in the file\n", dict[i], numOfWords[i]);
	}
}
