// Assignment2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// a struct to assign number to each letterbox
//and assign the state of the letterbox
struct state {
	int letterBoxState = 0;
	int letterBoxNumber = 0;
};

//global array from struct 'state' of size 150
state box[150];

int result = 0;
int counter = 2;

int main()
{
	do {
		for (int i = 1; i <= 150; i++)
		{
			box[i].letterBoxNumber = i;//assign number to each letterbox in array
			
			if (box[i].letterBoxNumber % counter == 0)
			{
				//if state is 1 i.e letter box is opened
				if (box[i].letterBoxState == 1)
				{
					//state equals 0 i.e letterbox is closed
					box[i].letterBoxState = 0;
				}
				else
					//else state is 1
					box[i].letterBoxState = 1;
			}
		}
		counter += 1;//increment by 1 
	} while (counter < 151);//continue while counter is less than 151

	for (int i = 1; i <= 150; i++)
	{
		//output the letterboxes whos state is still 0 i.e closed
		if (box[i].letterBoxState == 0)
		{
			cout <<  "Number: " << box[i].letterBoxNumber << endl;
		}
	}
	

    return 0;
}

